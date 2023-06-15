#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class NhanVien{
private:
    string ma, ten, chucvu;
    int luongcb, ngaycong;

public:
    NhanVien(string ten, string chucvu, int luongcb, int ngaycong){
        this->ten = ten;
        this->chucvu = chucvu;
        this->luongcb = luongcb;
        this->ngaycong = ngaycong;
    }
    int getLuong(){
        return luongcb * ngaycong;
    }
    int getThuong(){
        if(ngaycong >= 25)
            return (int)(0.2 * getLuong());
        else if(ngaycong >= 22)
            return (int)(0.1 * getLuong());
        else
            return 0;
    }
    int getPhuCap(){
        if(chucvu == "GD") return 250000;
        else if(chucvu == "PGD")
            return 200000;
        else if(chucvu == "TP")
            return 180000;
        else return 150000;
    }
    int getThuNhap(){
        return getThuong() + getLuong() + getPhuCap();
    }
    void in(){
        cout << "NV01" << ' ' << ten << ' ' << getLuong() << ' ' << getThuong() << ' ' << getPhuCap() << ' ' << getThuNhap() << endl;
    }
};


int main(){
    string ten; getline(cin, ten);
    int luongcb, ngaycong; cin >> luongcb >> ngaycong;
    string chucvu; cin >> chucvu;
    NhanVien v(ten, chucvu, luongcb, ngaycong);
    v.in();
}

// Thông tin về nhân viên bao gồm: Mã nhân viên (tự động tăng theo thứ tự nhập, tính từ NV01, nếu chỉ có 1 nhân viên thì mã là NV01) - Họ và tên - Lương cơ bản mỗi ngày công - Số ngày công - Chức vụ Tiền lương được tính bằng lương cơ bản nhân với số ngày công. Giả sử quy tắc tính tiền thưởng như sau:

// Số ngày công từ 25 trở lên thì thưởng 20% tiền lương
// Số ngày công từ 22 đến dưới 25 thì thưởng 10% tiền lương
// Dưới 22 ngày công thì không có thưởng. Mỗi nhân viên có thể có thêm phụ cấp chức vụ:
// GD: 250000
// PGD: 200000
// TP: 180000
// NV: 150000 Hãy nhập thông tin 1 nhân viên và tính toán thu nhập theo quy tắc trên.
// Input Format

// Gồm 4 dòng lần lượt ghi Họ tên, lương cơ bản, số ngày công và chức vụ; Số ngày công là số nguyên không âm không vượt quá 31;

// Constraints

// Lương cơ bản là số nguyên dương không quá 10^7;

// Output Format

// Ghi ra một dòng gồm: mã nhân viên, tên nhân viên, lương tháng, thưởng, phụ cấp và thu nhập. Mỗi thông tin cách nhau một khoảng trống.

// Sample Input 0

// Nguyen Van Teo
// 26000
// 21
// PGD
// Sample Output 0

// NV01 Nguyen Van Teo 546000 0 200000 746000