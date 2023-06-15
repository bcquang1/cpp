#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class SinhVien{
private:
    string ma, ten, ns, lop;
    double gpa;
public:
    void nhap(int stt){
        this->ma = to_string(stt);
        while(this->ma.size() < 3){
            this->ma = "0" + this->ma;
        }
        this->ma = "SV" + this->ma;
        getline(cin, this->ten);
        getline(cin, this->lop);
        getline(cin, this->ns);
        cin >> this->gpa;
    }
    void in(){
        cout << ma << ' ' << ten << ' ' << lop << ' ' << ns << ' ' << fixed << setprecision(2) << gpa << endl;
    }
    void chuanHoa(){
        if(ns[1] == '/') ns = "0" + ns;
        if(ns[4] == '/') ns.insert(3, "0");
        stringstream ss(this->ten);
        string res = "";
        string tmp;
        while(ss >> tmp){
            res += toupper(tmp[0]);
            for(int j = 1; j < tmp.size(); j++){
                res += tolower(tmp[j]);
            }
            res += " ";
        }
        res.pop_back();
        this->ten = res;
    }
    double getGpa(){
        return this->gpa;
    }
    string getMa(){
        return this->ma;
    }
};

bool cmp(SinhVien a, SinhVien b){
    if(a.getGpa() != b.getGpa()){
        return a.getGpa() > b.getGpa();
    }
    else{
        return a.getMa() < b.getMa();
    }
}

int main(){
    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        a[i].nhap(i + 1);
        a[i].chuanHoa();
    }
    sort(a, a + n, cmp);
    for(SinhVien x : a){
        x.in();
    }
}