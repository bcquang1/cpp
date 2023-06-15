#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho 2 xâu kí tự S1 và S2 chỉ bao gồm chữ cái in hoa và in thường, hãy tìm các kí tự xuất hiện trong xâu S1 mà không xuất hiện trong xâu S2, và các kí tự chỉ xuất hiện trong xâu S2 mà không xuất hiện trong xâu S1. Các ký tự được in ra theo thứ tự từ điển và chỉ liệt kê mỗi ký tự một lần.Dòng đầu tiên in ra các ký tự chỉ xuất hiện trong S1 mà không xuất hiện trong S2. Dòng thứ 2 in ra các ký tự chỉ xuất hiện trong S2 mà không xuất hiện trong S1.
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
    for(int i = 1; i < 256; i++){
        if(c1[i] == 1 && c2[i] == 0){
            cout << (char)i;
        }
    }
    cout << endl;
    for(int i = 0; i < 256; i++){
        if(c1[i] == 0 && c2[i] == 1){
            cout << (char)i;
        }
    }
    return 0;
}