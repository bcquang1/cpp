#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho số nguyên dương N có ít nhất 2 chữ số, một số được coi là số đẹp nếu 2 chữ số liền kề của nó chỉ lệch nhau đúng 1 đơn vị, ví dụ về số đẹp : 12345, 121212, 78987. Hãy kiểm tra xem N có phải là số đẹp hay không?


int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size() - 1; i++){
        if(abs(s[i] - s[i + 1]) != 1){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}