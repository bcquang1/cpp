#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Mặc dù là 2 người bạn thân nhưng Tí và Tèo lại rất khác nhau khi nói đến 28tech, Tí thì lại là người rất thích 28tech. Vì thế Tí nhờ bạn đếm các từ 28tech xuất hiện trong một xâu S cho trước.In ra số lượng từ 28tech xuất hiện trong xâu S không phân biệt hoa thường, tức là những từ như 28TEch, hay 28TecH... đều được chấp nhận.

void inthuong(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    int cnt = 0;
    while(ss >> tmp) {
        inthuong(tmp);
        if(tmp == "28tech"){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}