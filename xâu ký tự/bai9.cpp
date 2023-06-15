#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho xâu kí tự S và số nguyên K, bạn được yêu cầu chèn dòng chữ "28tech" vào chỉ số K của xâu S
int main(){
    string s;
    getline(cin, s);
    int k; cin >> k;
    s.insert(k, "28tech");
    cout << s;
    return 0;
}