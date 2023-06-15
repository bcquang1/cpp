// Cho mảng A[] gồm N điểm trong hệ tọa độ Oxy, hãy sắp xếp các điểm này theo khoảng cách về gốc tọa độ tăng dần, nếu 2 điểm có cùng khoảng cách tới gốc tọa độ thì in ra theo hoành độ tăng dần, nếu tiếp tục 2 điểm này có cùng hoành độ thì in ra theo thứ tự tung độ tăng dần.
#include <bits/stdc++.h>
#define ll long long

using namespace std;

double kc(pair<int, int> a){
    int s = a.first * a.first + a.second * a.second;
    return sqrt(s);
}

bool cmp(pair<int, int> a, pair<int, int> b){
    if(kc(a) != kc(b)) return kc(a) < kc(b);
    if(a.first != b.first) return a.first < b.first;
    return a.second < b.second;
}

int main(){
    vector<pair<int, int>> v;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v) cout << it.first << " " << it.second << endl;
    return 0;
}