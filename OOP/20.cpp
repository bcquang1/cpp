#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class Time{
private:
    int gio, phut, giay;
public:
    Time(int h, int m, int s) : gio(h), phut(m), giay(s){}

    bool operator < (Time b){
        int s1 = gio * 3600 + phut * 60 + giay;
        int s2 = b.gio * 3600 + b.phut * 60 + b.giay;
        return s1 < s2;
    }
    void in(){
        cout << gio << ' ' << phut << ' ' << giay << endl;
    }
};


int main(){
    int n; cin >> n;
    vector<Time> v;

    for(int i = 0; i < n; i++){
        int h, m, s; cin >> h >> m >> s;
        Time tmp(h, m, s);
        v.push_back(tmp);
    }
    sort(begin(v), end(v));
    for(auto it : v){
        it.in();
    }
}