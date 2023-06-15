#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Xâu pangram là xâu có chứa đầy đủ các kí tự từ A tới Z không phân biệt chữ hoa hay thường. Nhập vào xâu S và kiểm tra xem xâu S có phải là xâu pangram hay không?
int main(){
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int cnt[256] = {0};
    for(char x : s) cnt[x] = 1;
    for(int i = 97; i <= 122; i++){
        if(cnt[i] == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}