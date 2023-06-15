#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class SinhVien{
private:
    string ten, ns;
    double m1, m2, m3;
public:
    void nhap(){
        getline(cin, this->ten);
        getline(cin, this->ns);
        cin >> this->m1 >> this->m2 >> this->m3;
    }
    void in(){
        cout << ten << ' ' << ns << ' ' << fixed << setprecision(1) << (m1 + m2 + m3) << endl;
    }
};

int main(){
    SinhVien s;
    s.nhap();
    s.in();
}

// Viết chương trình khai báo lớp Thí Sinh gồm các thông tin: Họ tên, Ngày sinh, Điểm môn 1, Điểm môn 2, Điểm môn 3 và Tổng điểm. Đọc thông tin 1 thí sinh từ bàn phím và in ra màn hình 3 thông tin: Họ tên, Ngày sinh, Tổng điểm.

// Input Format

// Gồm 5 dòng lần lượt, mỗi dòng ghi 1 thông tin: Họ tên, Ngày sinh, Điểm môn 1, Điểm môn 2, Điểm môn 3.

// Constraints

// Các giá trị điểm là số thực (float). Họ tên không quá 50 chữ cái. Ngày sinh viết đúng chuẩn dd/mm/yyyy.

// Output Format

// Ghi ra Họ tên, Ngày sinh và Tổng điểm. Mỗi thông tin cách nhau một khoảng trống. Điểm được ghi ra với 1 số sau dấu phẩy.

// Sample Input 0

// Hoang Dinh Nam
// 28/09/2000
// 6.1
// 6.9
// 6.4
// Sample Output 0

// Hoang Dinh Nam 28/09/2000 19.4