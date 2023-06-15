#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct Sinhvien{
    string ten;
    string ns;
    string diachi;
    int toan, ly, hoa;
};

void nhap(Sinhvien &x){
    getline(cin, x.ten);
    getline(cin, x.ns);
    getline(cin, x.diachi);
    cin >> x.toan >> x.ly >> x.hoa;
}

int main(){
    int n; cin >> n;
    Sinhvien a[n];
    int max_diem = 0;
    for(int i = 0; i < n; i++){
        cin.ignore();
        nhap(a[i]);
        max_diem = max(max_diem, a[i].toan+a[i].ly+a[i].hoa);
    }
    cout << "DANH SACH THU KHOA :" << endl;
    for(int i = 0; i < n; i++){
        if(max_diem == a[i].toan + a[i].ly + a[i].hoa) cout << a[i].ten << " " << a[i].ns << " " << a[i].diachi << " " << a[i].toan + a[i].ly +a[i].hoa << endl;
    }
    cout << endl << "KET QUA XET TUYEN:" << endl;
    for(int i = 0; i < n; i++){
        if(max_diem == a[i].toan + a[i].hoa + a[i].ly){
            cout << a[i].ten << " " << a[i].ns << " " << a[i].diachi << " " << a[i].toan + a[i].ly +a[i].hoa << " ";
            if(a[i].toan + a[i].ly + a[i].hoa >= 24){
                cout << "DO\n";
            }
            else{
                cout << "TRUOT\n";
            }
        } 
    }

    return 0;
}