#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho một xâu S bao gồm chữ cái và dấu cách, thực hiện đếm các từ là in hoa trong xâu S.

int check(string s){
    for(int i = 0; i < s.size(); i++){
        if(!isupper(s[i])) return 0;
    }
    return 1;
}

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    int cnt = 0;
    while(ss >> tmp){
        if(check(tmp)) cnt++;
    }
    cout << cnt;
    return 0;
}