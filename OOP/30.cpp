#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class sv{
private:
    string ma, ten, lop, email;
public:
    friend istream& operator >> (istream& in, sv &x){
        getline(in, x.ma);
        getline(in, x.ten);
        getline(in, x.lop);
        getline(in, x.email);
        return in;
    }
    friend ostream& operator << (ostream& out, sv x){
        out << x.ma << ' ' << x.ten << ' ' << x.lop << ' ' << x.email << endl;
        return out;
    }
    string getlop(){
        return lop;
    }
    string getma(){
        return ma;
    }
};
bool cmp(sv a, sv b){
    
    return a.getma() < b.getma();
}
int main(){
    int n = 0;
    sv a[10000];
    sv x;
    while(cin >> x){
        a[n++] = x;
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i] ;
    }
}