#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Khi viết 1 số nguyên dương quá lớn, người ta thường thêm các dấu phẩy vào giữa các chữ số cho dễ đọc, ví dụ số N = 123456789 được viết thành 123,456,789, N = 12345 được viết thành 12,345. Nhiệm vụ của bạn là thêm dấu phẩy vào số N

int main(){
    string s; cin >> s;
    int dem = 0;
    string t = "";
    for(int i = s.size()-1; i >= 0; i--){
        t.push_back(s[i]);
        ++dem;
        if(dem == 3){
            t.push_back(',');
            dem = 0;
        }
    }
    if(t[t.size()-1] == ','){
        for(int i = t.size()-2; i >= 0;i--){
            cout << t[i];
        }
    }
    else {
        for(int i = t.size()-1; i >= 0;i--){
            cout << t[i];
        }
    }
    return 0;
}