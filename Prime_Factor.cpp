/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/10/11
|Time: 15:16:19
|Problem: prime_factor
|Time Complexity: O(sqrt(n) + logN)
|Space Complexity: O(number of prime divisors)
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n; cin >> n;

    //apply seive to determine prime number up to n
    vector<bool> prime(n + 1, 1);
    for(int i = 2; i * i <= n; i++){
        if(prime[i]){
            for(int j = i * i; j <= n; j += i){
                prime[j] = 0;
            }
        }
    }
    vector<int> primeFactors;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0 and prime[i]){
            primeFactors.push_back(i);
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n != 1){
        primeFactors.push_back(n);
    }
    for(auto i : primeFactors){
        cout << i << ' ';
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