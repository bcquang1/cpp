#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Tèo là một người ghét 28tech vì cho rằng 28tech cho quá nhiều bài tập khó làm anh ta phải đau đầu. Vì thế anh ta ghét tất cả những chữ cái xuất hiện trong từ "28tech", Tèo muốn nhờ bạn xóa hết những kí tự xuất hiện trong từ "28tech" khỏi xâu kí tự S, bạn hãy giúp Tèo nhé. Nếu xâu S sau khi xóa không còn kí tự nào bạn phải in ra EMPTY

int main(){
    string s, t = "28tech";
    getline(cin, s);    
    string res = "";
    for(int i = 0; i < s.size(); i++){
        int check = 0;
        for(int j = 0; j < t.size(); j++){
            if(s[i] == t[j]) check = 1;
        }
        if(check == 0) res += s[i];
    }
    if(res.empty()) cout << "EMPTY";
    else cout << res;
    return 0;
}