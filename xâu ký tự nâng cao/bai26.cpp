#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s; cin >> s;
    string res = "";
    res += s[0];
    int max_len = 1;
    string ans = res;
    s += " ";
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]){
            res += s[i];
        }
        else {
            if(res.size() > max_len){
                max_len = res.size();
                ans = res;
            }
            else if(res.size() == max_len){
                if(res > ans){
                    ans = res;
                }
            }
            res = "";
            res += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}

// Cho một xâu kí tự S chỉ bao gồm các chữ cái in thường, hãy tìm xâu con liên tiếp chứa các kí tự giống nhau dài nhất, nếu có nhiều xâu con thỏa mãn thì chọn xâu con có thứ tự từ điển lớn nhất.

// Input Format

// Một dòng duy nhất chứa xâu S.

// Constraints

// 1≤len(S)≤100000;

// Output Format

// In ra xâu con tìm được.

// Sample Input 0

// zzaabc
// Sample Output 0

// zz