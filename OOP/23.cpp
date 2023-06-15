#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class SinhVien{
private:
    string ma, ten, ns, lop;
    double gpa;
public:
    SinhVien(){
        ma = ""; ten = ""; ns = ""; lop = "";
        gpa = 0;
    }
    void nhap(int stt){
        string tmp = to_string(stt);
        while(tmp.size() < 3) tmp = "0" + tmp;
        ma = "SV" + tmp;
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
        stringstream ss(ten);  
        string tmp, res = "";
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
};

int main(){
    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        a[i].nhap(i + 1);
        a[i].chuanHoa();
    }
    for(SinhVien x : a){
        x.in();
    }
}