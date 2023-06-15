#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class HocSinh{
private:
    string ma, ten;
    double diem[10];
public:
    void nhap(int stt){
        string tmp = to_string(stt);
        if(tmp.size() == 1) tmp = "0" + tmp;
        ma = "HS" + tmp;
        getline(cin, ten);
        for(int i = 0; i < 10; i++){
            cin >> diem[i];
        }
    }
    double getTB(){
        double sum = 0;
        for(int i = 0; i < 10; i++){
            sum += diem[i];
        }
        return sum / 10;
    }
    string getMa(){
        return ma;
    }
    void in(){
        double tb = getTB();
        cout << ma << ' ' << ten << ' ' << fixed << setprecision(1) << tb << ' ';
        if(tb >= 9) cout << "XUAT SAC\n";
        else if(tb >= 8) cout << "GIOI\n";
        else if(tb >= 7) cout << "KHA\n";
        else if(tb >= 5) cout << "TB\n";
        else cout << "YEU\n";
    }
};

bool cmp(HocSinh a, HocSinh b){
    if(a.getTB() != b.getTB()){
        return a.getTB() > b.getTB();
    }
    return a.getMa() < b.getMa();
}

int main(){
    int n; cin >> n;
    HocSinh a[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        a[i].nhap(i + 1);
        cin.ignore();//xoa dau cach sau diem cuoi cung
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        a[i].in();
    }
}