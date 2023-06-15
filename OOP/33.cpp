#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class sv{
private:
    string ma, ten, lop, email, khoa;
public:
    friend istream& operator >> (istream& in, sv &x){
        getline(in, x.ma);
        getline(in, x.ten);
        getline(in, x.lop);
        getline(in, x.email);
        string tmp1 = "";
        for(int i = 0; i < x.lop.size(); i++){
            if(isalpha(x.lop[i])) tmp1 += x.lop[i];
        }
        x.khoa = tmp1;
        return in;
    }
    friend ostream& operator << (ostream& out, sv x){
        
        stringstream ss(x.ten);
        string res = ""; string tmp;
        while(ss >> tmp){
            res += toupper(tmp[0]);
            for(int i = 1; i < tmp.size(); i++){
                res += tolower(tmp[i]);
            }
            res += " ";
        }
        res.pop_back();
        x.ten = res;
        out << x.ma << ' ' << x.ten << ' ' << x.lop << ' ' << x.email << endl;
        return out;
    }
    string getkhoa(){
        return khoa;
    }
};
int main(){
    int n; cin >> n;
    cin.ignore();
    sv a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string tmp; getline(cin, tmp);
        string TMP;
        if(tmp == "CNTT") TMP = "CONG NGHE THONG TIN";
        else if(tmp == "DTVT") TMP = "DIEN TU VIEN THONG";
        else if(tmp == "KT") TMP = "KE TOAN";
        else if(tmp == "MKT") TMP = "MARKETING";
        cout << "DANH SACH SINH VIEN NGANH " << TMP << ' ' << ":\n";
        for(int i = 0; i < n; i++){
            if(a[i].getkhoa() == tmp) cout << a[i];
        }
    }
}