#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    map<string, int> mp;
    while(n--){
        string s; getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        vector<string> v;
        string tmp;
        stringstream ss(s);
        while(ss >> tmp){
            v.push_back(tmp);
        }
        string email = v[v.size() - 2];//ten
        for(int i = 0; i < v.size()-2; i++){
            email += v[i][0];
        }
        mp[email]++;
        if(mp[email] == 1){
            cout << email << "@xyz.edu.vn" << endl;
        }
        else {
            cout << email << mp[email] << "@xyz.edu.vn" << endl;
        }
        stringstream ss2(v[v.size() - 1]);
        while(getline(ss2, tmp, '/')){
            cout << stoi(tmp);
        }
        cout << endl;
    }
    return 0;
}

// Trường đại học ABC tổ chức cấp email cho sinh viên mới nhập học. Email và mật khẩu sẽ được cấp dựa trên tên của sinh viên và ngày sinh của sinh viên đó. Bạn hãy viết chương trình để cấp tài khoản theo yêu cầu như sau, tên email được tạo bằng cách lấy tên của sinh viên và ghép với các chữ cái đầu tiên của họ và tên đệm tất các ký tự trong email đều ở dạng in thường, ví dụ sinh viên có tên "Nguyen Van Long" sẽ được cấp email "longnv@xyz.edu.vn".

// Mật khẩu sẽ dựa trên ngày sinh của sinh viên đó, bằng cách ghép ngày tháng năm lại với nhau, ví dụ sinh viên sinh ngày 27/04/2002 sẽ có mật khẩu là 2742002. Ngoài ra sẽ có những trường hợp sinh viên bị trùng tên email, ví dụ, sinh viên "Nguyen Van Long" sẽ được cấp email "longnv@xyz.edu.vn", sinh viên tên "Ngo Van Long" cũng sẽ được cấp email "longnv@xyz.edu.vn", vì thế nhà trường quy định, theo thứ tự tên trong danh sách, nếu email được cấp của sinh viên hiện tại đã được cấp cho một sinh viên trước đó thì thêm số thứ tự vào tên email.

// Input Format

// Dòng đầu tiên là số lượng sinh viên cần cấp email N.

// N dòng tiếp theo, mỗi dòng gồm 2 phần là họ tên và ngày sinh, ngày sinh của sinh viên đã ở dạng chuẩn dd/mm/yyyy. Giữa các từ có thể có nhiều dấu cách, từ cuối cùng trong dòng là thông tin ngày sinh của sinh viên(xâu kí tự không có dấu cách chuẩn dd/mm/yyyy).

// Constraints

// 1≤N≤5000

// Dòng thông tin của sinh viên không quá 1000 kí tự, dữ liệu đảm bảo thông tin cuối cùng trong dòng là ngày sinh của sinh viên.

// Output Format

// In ra ra email và mật khẩu được cấp của mỗi sinh viên trên 2 dòng. Chú ý các sinh viên email bị trùng tên sẽ được thêm số thứ tự vào sau.

// Sample Input 0

// 4
// nguyen   van LONg 20/10/2002
// ngo Vang Long 20/12/2002
// Nguyen  Vu Long 22/12/2003
// ho van  nam 17/09/2002
// Sample Output 0

// longnv@xyz.edu.vn
// 20102002
// longnv2@xyz.edu.vn
// 20122002
// longnv3@xyz.edu.vn
// 22122003
// namhv@xyz.edu.vn
// 1792002