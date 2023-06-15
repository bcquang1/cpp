#include<bits/stdc++.h>
#define ll long long
using namespace std;

class nv{
    private:
        string ma, ten, gt, ns, dc, mst, nk;
    public:
        void nhap(){
            this->ma= "00001";
            getline(cin, this->ten);
            getline(cin, this->gt);
            getline(cin, this->ns);
            getline(cin, this->dc);
            getline(cin, this->mst);
            getline(cin, this->nk);
        }
        void in(){
            cout<< ma<<' '<< ten<<' '<< gt<<' '<< ns<<' '<< dc<<' '<<mst<<' '<< nk;
        }
        void chuanhoa(){
            if(ns[1]=='/') ns= "0"+ns;
            if(ns[4]=='/') ns.insert(3, "0");
            if(nk[1]=='/') nk="0"+ nk;
            if(nk[4]=='/') nk.insert(3, "0");
            stringstream ss(ten);
            string res="", tmp;
            while(ss>> tmp){
                res+= toupper(tmp[0]);
                for(int i=1; i< tmp.size(); i++){
                    res+= tolower(tmp[i]);
                }
                res+=' ';
            }
            res.pop_back();
            ten=res;
        }
};

int main(){
    nv a;
    a.nhap();
    a.chuanhoa();
    a.in();
}

// Một nhân viên làm việc trong công ty được lưu lại các thông tin sau: 1. Mã nhân viên: được gán giá trị là 00001. 2. Họ tên: Xâu ký tự không quá 50 chữ cái. 3. Giới tính: Nam hoặc Nu. 4. Ngày sinh, có thể chưa chuẩn nhưng đủ 3 phần và phân cách bởi dấu /. 5. Địa chỉ: Xâu ký tự không quá 100 chữ cái. 6. Mã số thuế: Dãy số có đúng 10 chữ số. 7. Ngày ký hợp đồng, có thể chưa chuẩn nhưng đủ 3 phần và phân cách bởi dấu /. Viết chương trình nhập một nhân viên (không nhập mã) in ra màn hình thông tin của nhân viên đó. Tên nhân viên được chuẩn hóa về dạng viết hoa chữ cái đầu của từng từ, ngày sinh về đúng dạng chuẩn dd/mm/yyyy

// Input Format

// Gồm 6 dòng lần lượt ghi các thông tin theo thứ tự đã ghi trong đề bài.

// Constraints

// N/A

// Output Format

// Ghi ra đầy đủ thông tin nhân viên trên một dòng, các thông tin cách nhau đúng một khoảng trống.

// Sample Input 0

// Hoang Dinh NAM
// Nam
// 9/9/1998
// Bac Ninh
// 8743766435
// 10/2/2021
// Sample Output 0

// 00001 Hoang Dinh Nam Nam 09/09/1998 Bac Ninh 8743766435 10/02/2021