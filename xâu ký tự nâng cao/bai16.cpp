#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s; getline(cin, s);
    string res = "", tmp;
    stringstream ss(s);
    while(ss >> tmp){
        res += toupper(tmp[0]);
        for(int j = 1; j < tmp.size(); j++){
            res += tolower(tmp[j]);
        }
        res += ' ';
    }
    res.pop_back();
    cout << res << endl;
    string t; getline(cin, t);
    if(t[1] == '/') t = "0" + t;
    if(t[4] == '/') t.insert(3, "0");
    cout << t << endl;
    return 0;
}


// Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người bằng cách viết hoa chữ cái đầu tiên của từng từ và viết thường các chữ cái còn lại. Xâu tiếp theo là ngày sinh của người này, bao gồm ngày tháng năm phân cách nhau bằng dấu '/', hãy chuẩn hóa ngày sinh của người này về đúng dạng dd/mm/yyyy.

// Input Format

// Dòng đầu tiên là tên người; Dòng thứ 2 là ngày sinh;

// Constraints

// Xâu kí tự tên người có không quá 2000 kí tự; Xâu ngày sinh có không quá 10 kí tự. Dữ liệu đảm bảo có dấu '/' giữa ngày, tháng, năm.

// Output Format

// Dòng đầu tiên in ra tên người sau khi chuẩn hóa. Dòng thứ 2 in ra ngày sinh sau khi đưa về dạng chuẩn dd/mm/yyyy.

// Sample Input 0

// hoang  dinh NAm
// 20/5/1999
// Sample Output 0

// Hoang Dinh Nam
// 20/05/1999