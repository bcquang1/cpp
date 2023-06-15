#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Đầu tiên in ra các ký tự và tần suất xuất hiện của các ký tự ở trong xâu theo thứ tự từ điển tăng dần, sau đó cách ra một dòng và in ra tần suất xuất hiện của các ký tự theo thứ tự xuất hiện trong xâu(chú ý mỗi kí tự chỉ in 1 lần)

int main(){
    string s; 
    cin >> s;
    map<char, int> mp;
    for(char x : s) mp[x]++;
    for(auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for(char x : s) {
        if(mp[x]){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}