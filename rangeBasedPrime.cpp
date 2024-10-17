/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/10/14
|Time: 00:43:40
|Problem: rangeBasedPrime
|Time Complexity: O()
|Space Complexity: O()
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;

vector<int> prime(100, 1);



void seive() {


    prime[0] = prime[1] = 0;

    for(int i = 2; i * i <= 100; i++){
        if(prime[i]){
            for(int j = i * i; j <= 100; j += i){   
                prime[j] = 0;
            }
        }
    }

    for(int i = 0; i <= 15; i++){
        cout << prime[i] << ' ';
    }
    cout << endl;
    int cnt = 0;
    for(int i = 0; i <= 100; i++){
        if(prime[i] == 1){
            cnt++;
        }

        prime[i] = cnt;
    }

    for(int i = 0; i <= 15; i++){
        cout << prime[i] <<' ';
    }
    cout << endl;


}

void solve() {
    
    seive();

    

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}