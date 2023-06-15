#include <bits/stdc++.h>
#define ll long long

using namespace std;

int chiadu(string s, int k){
    int res = 0;
    for(int i = 0; i < s.length(); i++){
        res = (res*10 + s[i]-'0') % k;
    }
    return res;
}

int main(){
    string s; cin >> s;
    int k = 15;
    if(chiadu(s, k) == 0)cout << "YES";
    else cout << "NO";
    return 0;
}

//method 2
// int check(string s){
//     int sum = 0;
//     for(char x : s){
//         sum += c-'0';
//     }
//     int k = s[s.length()-1]-'0';
//     if(sum % 3 == 0 && k % 5 == 0) return 1;
//     return 0;
// }

// int main(){
//     string s; cin >> s;
//     if(check(s)) cout << "YES";
//     else cout << "NO";
// }