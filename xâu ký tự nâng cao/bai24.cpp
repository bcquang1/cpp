#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s; cin >> s;
    ll ans = s.size();
    map<char, int> mp;
    for(char x : s){
        mp[x]++;
    }
    for(auto it : mp){
        ans += 1ll * it.second * (it.second-1)/2;
    }
    cout << ans << endl;
    return 0;
}

// Cho xâu S chỉ bao gồm các kí tự in thường, hãy đếm số lượng xâu con (xâu ký tự chứa các chữ cái liên tiếp) mà có kí tự đầu và kí tự cuối giống nhau.

// Input Format

// Một dòng duy nhất chứa xâu S chỉ bao gồm chữ cái in thường.

// Constraints

// 1≤len(S)≤100000;

// Output Format

// In ra đáp án của bài toán.

// Sample Input 0

// abcda
// Sample Output 0

// 6
// Explanation 0

// Các xâu con có kí tự đầu cuối giống nhau : a, b, c, d, a, abcda