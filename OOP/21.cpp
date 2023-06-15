#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class MatHang{
private:
    string ma, ten, donvi;
    int mua, ban;
public:
    MatHang(int ma, string ten, string donvi, int mua, int ban){
        string tmp = to_string(ma);
        while(tmp.size() < 4) tmp = "0" + tmp;
        this->ma = "MH" + tmp;
        this->ten = ten;
        this->donvi = donvi;
        this->mua = mua;
        this->ban = ban;
    } 

    bool operator < (const MatHang b){
        return (this->ban - this->mua) < (b.ban - b.mua);
    }

    void in(){
        cout << ma << ' ' << ten << ' ' << donvi << ' ' << mua << ' ' << ban << ' ' << ban - mua << endl;
    }

    int getLoiNhuan(){
        return ban - mua;
    }
    string getMa(){
        return ma;
    }
};

bool cmp(MatHang a, MatHang b){
    if(a.getLoiNhuan() != b.getLoiNhuan())
        return a.getLoiNhuan() > b.getLoiNhuan();
    else
        return a.getMa() < b.getMa();
}

int main(){
    int n; cin >> n;
    vector<MatHang> v;
    for(int i = 0; i < n; i++){
        cin.ignore();
        string ten, donvi;
        getline(cin, ten);
        getline(cin, donvi);
        int mua, ban; cin >> mua >> ban;
        MatHang m(i + 1, ten, donvi, mua, ban);
        v.push_back(m);
    }
    sort(begin(v), end(v), cmp);
    //reverse(begin(v), end(v));
    for(auto it : v){
        it.in();
    }
}