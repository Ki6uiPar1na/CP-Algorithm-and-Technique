/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/10/11
|Time: 15:01:21
|Problem: print_All_Divisors
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n; cin >> n;

    //brute force
    vector<int> divisorsBruteForce;        
    for(int i = 1; i <= n; i++){ //       TC - O(n), SC - O(numbers of divisors)
        if(n % i == 0){
            divisorsBruteForce.push_back(i);
        }
    }
    for(auto i : divisorsBruteForce) cout << i << ' '; cout << endl;

    //apply number theorem
    vector<int> efficientAns;
    for(int i = 1; i * i <= n; i++){ //tc - O(sqrt(n)) sc - O(number of divisors)
        if(n % i == 0){
            efficientAns.push_back(i);
            if((n / i) != i){
                efficientAns.push_back(n / i);
            }
        }
        
    }
    for(auto i :efficientAns) cout << i << ' '; cout << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}