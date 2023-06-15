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
};
int main(){
    int n;
    cin >> n;
    nv a[n];
    cin.ignore();
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i].chuan(i + 1);
    }
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
}