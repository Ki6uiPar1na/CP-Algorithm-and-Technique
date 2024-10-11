/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/10/11
|Time: 16:43:18
|Problem: Count_Prime_In_Range
|Time Complexity: O(n log log n ) + O(max(r)) + O(q)
|Space Complexity: O()
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;

vector<int> Seive(int n){
    vector<int> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for(int i = 2; i * i <= n; i++){
        if(prime[i] == 1){
            for(int j = i * i; j <= n; j += i){
                prime[j] = 0;
            }
        }
    }
    return prime;
}

void solve() {

    vector<int> prime = Seive(1e6); // O(n log log n)
    int cn = 0;
    for(int i = 0; i < prime.size(); i++){ //O(max(r))
        if(prime[i] == 1){
            cn++;
        }
        prime[i] = cn;
    }

    
    int q; cin >> q; //O(q)
    while(q--){
        int l, r; cin >> l >> r;
        cout << prime[r] - prime[l - 1] << endl;
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}