#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho xâu kí tự S, bạn hãy tìm kí tự được lặp lại đầu tiên trong xâu S. Nếu xâu S không có kí tự bị lặp lại thì in ra NONE
int main(){
    string s; 
    getline(cin, s);
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++) { 
        mp[s[i]]++;
        if(mp[s[i]] == 2){
            cout << s[i];
            return 0;
        }
    }
    cout << "NONE";
    return 0;
}