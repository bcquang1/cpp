#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho xâu kí tự S, tiến hành sắp xếp kí tự trong xâu S theo thứ tự tăng dần, giảm dần theo thứ tự từ điển rồi in ra màn hình.

int main(){
    string s;
    getline(cin, s); 
    sort(s.begin(), s.end());
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s;   
    return 0;
}