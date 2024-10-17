/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/10/13
|Time: 14:51:15
|Problem: Print_All_Subsequence_Recursion
|Time Complexity: O()
|Space Complexity: O()
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;

void printSubsequence(vector<int> &v, int index, vector<int> ansArray){
    if(index == v.size()){
        for(auto &i : ansArray){
            cout << i << ' ';
        }
        cout << '\n';
        return;
    }
    printSubsequence(v, index + 1, ansArray);
    ansArray.push_back(v[index]);
    printSubsequence(v, index + 1, ansArray);
    ansArray.pop_back();

}

void solve() {

    vector<int> v{1, 2, 3, 4};
    vector<int> ansArray;
    printSubsequence(v, 0, ansArray);

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}