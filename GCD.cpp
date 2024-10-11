/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/10/11
|Time: 16:06:23
|Problem: GCD
|Time Complexity: O(log(something))
|Space Complexity: O(1)
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n1, n2; cin >> n1 >> n2;
    int gcd = 1;

    //brute force
    for(int i = 1; i <= min(n1, n2); i++){ //O(min(n1, n2))
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    cout << gcd << endl;

    //optimzed version
    while(n1 > 0 and n2 > 0){  //O(log(something))
        if(n1 > n2){
            n1 = n1 % n2;
        } else{
            n2 = n2 % n1;
        }
    }
    
    if(n1 == 0) cout << n2 << endl;
    else cout << n1 << endl;


}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}