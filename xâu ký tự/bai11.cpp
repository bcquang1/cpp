#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho ngày sinh của một người theo dạng ngày/tháng/năm. Bạn hãy chuẩn hóa ngày sinh này về dạng dd/mm/yyyy. Ví dụ nếu ngày sinh là 1/10/2002 thì được chuẩn hóa thành 01/10/2002, hoặc 5/2/2002 thì được chuẩn hóa thành 05/02/2002.
int main(){
    string s;
    getline(cin, s);
    if(s[1] == '/') s.insert(0, "0");
    if(s[4] == '/') s.insert(3, "0");
    cout << s;
    return 0;
}