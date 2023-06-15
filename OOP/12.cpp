#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class SinhVien{
private:
    string ma, ten;
    double toan, ly, hoa;

public:
    SinhVien(string ma, string ten, double toan, double ly, double hoa){
        this->ma = ma;
        this->ten = ten;
        this->toan = toan;
        this->ly = ly;
        this->hoa = hoa;
    }
    void in(){
        int kv = ma[2] - '0';
        double tongdiem = toan + ly + hoa;
        if(kv == 1) tongdiem += 0.5;
        else if(kv == 2) tongdiem += 1.0;
        else tongdiem += 2.5;
        cout << ma << ' ' << ten << ' ' << kv << ' ';
        if(tongdiem == (int)tongdiem)
            cout << (int) tongdiem << ' ';
        else cout << fixed << setprecision(1) << tongdiem << ' ';
        if(tongdiem >= 24) cout << "TRUNG TUYEN\n";
        else cout << "TRUOT\n";
    }
};


int main(){
    string ma, ten;
    getline(cin, ma);
    getline(cin, ten);
    double t, l, h; cin >> t >> l >> h;
    SinhVien s(ma, ten, t, l, h);
    s.in();
}

// Trường Đại học XYZ tuyển sinh theo hình thức xét điểm thi ba môn Toán – Lý – Hóa. Để đơn giản, khu vực tuyển sinh được quy định luôn bởi ba chữ cái đầu tiên trong mã thí sinh. Do rất thích các thí sinh đến từ Khu vực 3 nên trường XYZ tự quy định giá trị điểm ưu tiên Khu vực như trong bảng sau:

// imageGiả sử biết trước điểm chuẩn là 24. Hãy xác định tình trạng tuyển sinh của thí sinh.

// Input Format

// Chỉ bao gồm thông tin của một thí sinh trên 5 dòng lần lượt là: - Mã thí sinh - Họ tên - Điểm toán - Điểm lý - Điểm hóa

// Constraints

// Các giá trị điểm đều đảm bảo trong phạm vi [0,10] và có thể có 1 chữ số phần thập phân.

// Output Format

// Ghi ra các thông tin: - Mã thí sinh - Họ tên - Khu vực - Tổng điểm – có tính ưu tiên (có thể có 1 số phần thập phân), trong trường hợp điểm là số thực với phần thập phân bằng 0 thì không in ra phần thập phân. - Trạng thái: TRUNG TUYEN hoac TRUOT (sau khi đã tính cả điểm ưu tiên)

// Sample Input 0

// KV2B
// Hoang Ngoc Long
// 3.4
// 9
// 0
// Sample Output 0

// KV2B Hoang Ngoc Long 2 13.4 TRUOT