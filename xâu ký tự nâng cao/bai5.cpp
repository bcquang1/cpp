#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho 2 xâu kí tự S1 và S2, hãy in ra các kí tự xuất hiện ở cả 2 xâu theo thứ tự từ điển, chú ý mỗi kí tự chỉ liệt kê một lần. Sau đó tiếp tục liệt kê các kí tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển.Dòng 1 in ra các ký tự xuất hiện ở cả 2 xâu theo thứ tự từ điển tăng dần. Dòng 2 in ra các ký tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển tăng dần.
int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);
    int c1[256] = {0}, c2[256] = {0};
    for(char x : s){
        c1[x] = 1;
    }
    for(char x : t){
        c2[x] = 1;
    }
    for(int i = 0; i < 256; i++){
        if(c1[i] && c2[i]){
            cout << (char)i;
        }
    }
    cout << endl;
    for(int i = 0; i < 256; i++){
        if(c1[i] || c2[i]){
            cout << (char)i;
        }
    }
    return 0;
}