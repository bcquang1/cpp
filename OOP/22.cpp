#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class SinhVien{
private:
    string ma;
    string ten, ngaysinh, lop;
    double gpa;
public:
    SinhVien(){
        ma = ten = ngaysinh = lop = "";
        gpa = 0;
    }
    void nhap(int msv){
        ma = to_string(msv);
        while(ma.size() < 3) ma = "0" + ma;
        ma = "SV" + ma;
        cin.ignore();
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, ngaysinh);
        cin >> gpa;
    }
    void chuanHoa(){
        if(ngaysinh[1] == '/') ngaysinh = "0" + ngaysinh;
        if(ngaysinh[4] == '/') ngaysinh.insert(3, "0");
    }
    void in(){
        cout << ma << ' ' << ten << ' ' << lop << ' ' << ngaysinh << ' ' << fixed << setprecision(2) << gpa << endl;
    }
};


int main(){
    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++){
        a[i].nhap(i + 1);
        a[i].chuanHoa();
    }
    for(int i = 0; i < n; i++){
        a[i].in();
    }
}