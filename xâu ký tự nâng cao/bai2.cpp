#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    string s; getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
}
