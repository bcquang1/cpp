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
    }
    sort(a, a + n, cmp);
    for(SinhVien x : a){
        x.in();
    }
}