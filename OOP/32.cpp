#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class SinhVien{
private:
    string ma, ten, lop, email;
public:
    void nhap(){
        getline(cin, ma);
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, email);
    }
    void in(){
        cout << ma << ' ' << ten << ' ' << lop << ' ' << email << endl;
    }
    string getLop(){
        return lop;
    }
    string getMa(){
        return ma;
    }
    void chuanHoa(){
        stringstream ss(ten);
        string tmp;
        string res = "";
        while(ss >> tmp){
            res += toupper(tmp[0]);
            for(int j = 1; j < tmp.size(); j++){
                res += tolower(tmp[j]);
            }
            res += " ";
        }
        res.pop_back();
        ten = res;
    }
};

bool cmp(SinhVien a, SinhVien b){
    if(a.getLop() != b.getLop()){
        return a.getLop() < b.getLop();
    }
    else{
        return a.getMa() < b.getMa();
    }
}


int main(){
    int n; cin >> n;
    cin.ignore();
    SinhVien a[n];
    for(int i = 0; i < n; i++){
        a[i].nhap();
        a[i].chuanHoa();
    }
    int q; cin >> q;
    while(q--){
        int nam; cin >> nam;
        cout << "DANH SACH SINH VIEN KHOA " << nam << " :\n";
        for(SinhVien x : a){
            int tmp = stoi(x.getMa().substr(0, 4));
            if(tmp == nam){
                x.in();
            }
        }
    }
}