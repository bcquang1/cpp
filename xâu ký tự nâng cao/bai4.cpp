#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho một xâu kí tự, hãy tìm kí tự có số lần xuất hiện ít nhất trong xâu và kí tự có số lần xuất hiện nhiều nhất ở trong xâu. Trong trường hợp có nhiều kí tự có cùng số lần xuất hiện lớn nhất hoặc nhỏ nhất thì in ra kí tự có thứ tự từ điển lớn nhất.
int main(){
    string s;
    getline(cin, s);
    map<char, int> mp;
    for(char x : s) mp[x]++;
    int min_fre = 1e9, max_fre = 0;
    char res1, res2;
    for(auto it : mp){
        if(it.second >= max_fre){
            max_fre = it.second;
            res1 = it.first;
        }
        if(it.second <= min_fre){
            min_fre = it.second;
            res2 = it.first;
        }
    }
    cout << res1 << " " << max_fre << endl;
    cout << res2 << " " << min_fre << endl;
    return 0;
}