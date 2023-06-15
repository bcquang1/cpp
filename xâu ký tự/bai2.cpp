#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho xâu kí tự S có không quá 10000 kí tự, S bao gồm kí tự in hoa, in thường, chữ số và kí tự đặc biệt. Hãy tự viết 3 hàm lật ngược xâu, viết hoa và viết thường xâu kí tự

void inthuong(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}

void inhoa(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = toupper(s[i]);
    }
}

int main(){
    string s;
    getline(cin, s);
    for(int i = s.size()-1; i >= 0; i--){
        cout << s[i];
    }
    cout << endl;
    inthuong(s);
    cout << s << endl;
    inhoa(s);
    cout << s;
    return 0;
}