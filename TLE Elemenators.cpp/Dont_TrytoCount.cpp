/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/10/15
|Time: 23:56:19
|Problem: Don'tTrytoCount
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1e5 + 5
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
#define int long long
int nCr(int n, int r){ int ans=1; for(int i=1;i<=r;i++){ ans=ans*(n-i+1)/i; } return ans; }
int fact(int n){if (n <= 1)return 1;return n*fact(n-1);}
int nPr(int n, int r){return fact(n)/fact(n-r);}
int intDigitSum(int n){int sum = 0; while(n){sum += n % 10; n /= 10;} return sum;}
int strDigitSum(string s){int sum = 0; for(int i = 0; i < s.size(); i++){sum += (s[i] - '0');} return sum;}
vector<int> prime(N, 1);
void seive(){ prime[0] = prime[1] = 0; for(int i = 2; i * i <= N; i++){ if(prime[i] == 1){ for(int j = i * i; j <= N; j += i){ prime[j] = 0;}}}}
int gcd(int a, int b){while(a > 0 and b > 0){if(a > b) a = a % b; else b = b % a; if(a == 0) return b; else return a;}}

void solve() {

    tc{
        int a, b; cin >> a >> b;
        string s1, s2; cin >> s1 >> s2;
        bool f = false;
        if(s1.find(s2) != string::npos){
            f = true;
            cout << 0 << endl;
        } else{
            for(int i = 1; i <= 5; i++){
                s1 += s1;
                if(s1.find(s2) != string::npos){
                    cout << i << endl;
                    f = true;
                    break;
                }
            }
        }
        if(!f){
            cout << -1 << endl;
        }
        

        
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}