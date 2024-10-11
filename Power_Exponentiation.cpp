/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/10/11
|Time: 15:47:42
|Problem: Power_Exponentiation
|Time Complexity: O(log2X)
|Space Complexity: O(1)
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n, x; cin >> n >> x;

    //brute force
    unsigned int ans = 1;
    for(int i = 1; i <= x; i++){ //tc - O(x)
        ans *= n;
    }
    cout << ans << endl;

    //optimized code
    bool f = false;
    if(x < 0){
        x = abs(x);
        f = true;
    }
    while(x > 0){
        if(x % 2 == 1){
            ans *= n;
            x--;
        } else{
            x /= 2;
            n *= n;
        }
    }
    
    if(f) cout << double(1) / ans << endl;
    else cout << ans << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}