#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class nv{
private:
    string ma, ten, gt, ns, dc, mst, hd;
public:
    friend istream& operator >> (istream& in, nv &x){
        getline(in, x.ten);
        getline(in, x.gt);
        getline(in, x.ns);
        getline(in, x.dc);
        getline(in, x.mst);
        getline(in, x.hd);
        return in;
    }
    friend ostream& operator << (ostream& out, nv x){
        out << x.ma << ' ' << x.ten << ' ' << x.gt << ' ' << x.ns << ' ' << x.dc << ' ' << x.mst << ' ' << x.hd << endl;
    return out;
    }
    void chuan(int stt){
        string res = to_string(stt);
        while(res.size() < 5) res = "0" + res;
        ma = res;
        if(ns[2] != '/') ns = "0" + ns;
        if(ns[5] != '/') ns.insert(3, "0");
        if(hd[2] != '/') hd = "0" + hd;
        if(hd[5] != '/') hd.insert(3, "0");
    }
    int getnam(){
        string res = "";
        for(int i = 6; i <= 9; i++){
            res += ns[i];
        }
        int x = stoi(res);
        return x;
    }
    int getthang(){
        string res1 = "";
        for(int i = 3; i <= 4; i++){
            res1 += ns[i];
        }
        int a = stoi(res1);
        return a;
    }
    int getngay(){
        string res2 = "";
        for(int i = 0; i <= 1; i++){
            res2 += ns[i];
        }
        int b = stoi(res2);
        return b;
    }
    string getma(){
        return ma;
    }
};
bool cmp(nv a, nv b){
    if(a.getnam() != b.getnam()){
        return a.getnam() < b.getnam();
    }
    else{
        if(a.getthang() != b.getthang()) return a.getthang() < b.getthang();
        else{
            if(a.getngay() != b.getngay()) return a.getngay() < b.getngay();
            return a.getma() < b.getma();
        }
    }
}
int main(){
    int n;
    cin >> n;
    nv a[n];
    cin.ignore();
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i].chuan(i + 1);
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
}