/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/10/11
|Time: 15:15:07
|Problem: seive_of_erathoniss
|Time Complexity: O(Nlog log N)
|Space Complexity: O(N)
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n; cin >> n;
    vector<bool> prime(n + 1, 1); //space = O(n)
    prime[0] = prime[1] = 0;

    for(int i = 2; i * i <= n; i++){ //time = O(logN)
        if(prime[i]){
            for(int j = i * i; j <= n; j += i){ //time = O(logN)
                prime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            cout << i << ' ';
        }
    }
    cout << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}