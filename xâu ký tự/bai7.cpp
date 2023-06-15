#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho xâu kí tự S bao gồm chữ cái và chữ số, thực hiện tách riêng chữ số và chữ cái của S.
int main(){
    string s;
    getline(cin, s);
    string alpha = "";
    string digit = "";
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i])) alpha += s[i];
        else digit += s[i]; 
    }
    cout << digit << endl << alpha;
    return 0;
}