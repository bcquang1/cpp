#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class gv{
private:
    string ten, mon, ma;
public:
    friend istream& operator >> (istream& in, gv &x){
        getline(in, x.ten);
        getline(in, x.mon);
        string res = "", tmp;
        stringstream ss(x.mon);
        while(ss >> tmp){
            res += toupper(tmp[0]);
        }
        x.mon = res;
        return in;
    }
    friend ostream& operator << (ostream& out, gv x){
        out << x.ma << ' ' << x.ten << ' ' << x.mon << endl;
        return out;
    }
    void chuan(int stt){
        string res = to_string(stt);
        while(res.size() < 2) res = "0" + res;
        res = "GV" + res;
        ma = res;
    }
    string getsx(){
        vector<string> v;
        string tmp;
        stringstream ss(ten);
        while(ss >> tmp){
            v.push_back(tmp);
        }
        return v[v.size() - 1];
    }
    string getma(){
        return ma;
    }
};
bool cmp(gv x, gv y){
    if(x.getsx() != y.getsx()) return x.getsx() < y.getsx();
    return x.getma() < y.getma();
}
int main(){
    int n; cin >> n;
    cin.ignore();
    gv a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i].chuan(i + 1);
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
}