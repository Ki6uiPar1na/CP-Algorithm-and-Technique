/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/10/12
|Time: 23:52:33
|Problem: recursion
|Time Complexity: O()
|Space Complexity: O()
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;

//print n times your name basic recurstion

void printName(int i, int n){
    if(i > n){
        return;
    }
    cout << "Ki6ui-Par1na\n";
    printName(i + 1, n); //recursive call
}

void printNumber(int n){
    if(n == 0){
        return;
    }
    cout << n << "\n";
    printNumber(n - 1); //recursive call

}

//backtracking

int func(int n){
    if(n == 0) return 0;
    cout << n << ' ';
    func(n - 1);
}

void reverseArray(vector<int> &v, int l, int r){
    if(l >= r){
        return;
    }
    swap(v[l], v[r]);
    reverseArray(v, l + 1, r - 1);
}

void checkStringPalindrome(string s, int l, int r){
    if(l >= r){
        cout << "Palindrome\n";
        return;
    }
    if(s[l] != s[r]){
        cout << "Not a palindrome\n";
        return;
    }
    checkStringPalindrome(s, l + 1, r - 1);
}

int fibonacchi(int n){
    if(n <= 1) return n;
    return fibonacchi(n - 1) + fibonacchi(n - 2);
}



void solve() {
    int val = fibonacchi(4);
    cout << val << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}