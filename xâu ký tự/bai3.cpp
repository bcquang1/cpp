#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho một xâu kí tự S chỉ bao gồm chữ số và chữ cái, hãy tính tổng chữ số xuất hiện trong xâu.
int main(){
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])) sum += s[i] - 48;
    }
    cout << sum;
    return 0;
}