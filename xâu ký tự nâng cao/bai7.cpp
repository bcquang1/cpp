#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho một xâu ký tự S chỉ bao gồm các chữ cái, hãy kiểm tra xem xâu nhập vào có phải là xâu đối xứng hay không?
int main(){
    string s;
    getline(cin, s);
    string t = s;
    reverse(s.begin(), s.end());
    if(s == t)cout << "YES";
    else cout << "NO";
    return 0;
}