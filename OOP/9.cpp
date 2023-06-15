#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class gv{
private:
    string ma, ten, cv;
    int bac, pc, luongcb;
public:
    friend istream& operator >> (istream &in, gv &x){
        getline(in, x.ma);
        getline(in, x.ten);
        in >> x.luongcb;
        return in;
    }
    friend ostream& operator << (ostream &out, gv x){
        string res1 = "", res2 = "";
        for(int i = 0; i < x.ma.size(); i++){
            if(isalpha(x.ma[i])) res1 += x.ma[i];
            else res2 += x.ma[i];
        }
        x.cv = res1;
        x.bac = stoi(res2);
        if(x.cv == "HT") x.pc = 2000000;
        else if(x.cv == "HP") x.pc = 900000;
        else x.pc = 500000;
        out << x.ma << ' ' << x.ten << ' ' << x.bac << ' ' << x.luongcb * x.bac + x.pc << endl;
        return out;
    }
};
int main(){
    gv x;
    cin >> x;
    cout << x;
}

// Trường phổ thông XYZ tính lương giáo viên theo quy tắc sau: Mỗi giáo viên có mã ngạch gồm 4 ký tự trong đó. 2 ký tự đầu là chức vụ (HT: Giáo viên kiêm nhiệm Hiệu trưởng, HP: Giáo viên kiêm nhiệm Hiệu phó, GV: Giáo viên thường). 2 ký tự số cuối cùng cho biết hệ số bậc lương (không quá 20). Lương cơ bản của mỗi giáo viên cũng có thể khác nhau. Phụ cấp quy định như sau. HT: 2.000.000. HP: 900.000. GV: 500.000. Thu nhập được tính bằng lương cơ bản nhân với hệ số bậc lương cộng thêm phụ cấp. Hãy tính lương cho 1 giáo viên theo quy tắc trên.

// Input Format

// Có 3 dòng lần lượt là mã ngạch, họ tên và lương cơ bản.

// Constraints

// Lương cơ bản là số nguyên không quá 10^7

// Output Format

// Chỉ có một dòng ghi lần lượt các thông tin: mã ngạch, họ tên, bậc lương, thu nhập.

// Sample Input 0

// HP05
// Nguyen Van Ha
// 1748000
// Sample Output 0

// HP05 Nguyen Van Ha 5 9640000