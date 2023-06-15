// Cho các điểm trong hệ tọa độ OXYZ, nhiệm vụ của bạn là sắp xếp các điểm này theo hoành độ tăng dần, nếu có cùng hoành độ thì sắp theo tung độ tăng dần, nếu có cùng tùng độ tiếp tục sắp xếp theo cao độ tăng dần. Sử dụng pair như sau để lưu các tọa độ này :

// pair<int, pair<int, int>>

#include <bits/stdc++.h>
#define ll long long
#define pip pair<int, pair<int, int>>
using namespace std;

bool cmp(pip a, pip b){
    if(a.first != b.first) return a.first < b.first;
    if(a.second.first != b.second.first) return a.second.first < b.second.first;
    return a.second.second < b.second.second;
}

int main(){
    int n; cin >> n;
    vector<pair<int, pair<int, int>>> v;
    for(int i = 0; i < n; i++){
        int x, y, z; cin >> x >> y >> z;
        pip a = {x, {y, z}};
        v.push_back(a);
    }
    sort(v.begin(), v.end(), cmp);
    for(pip it : v){
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }
    return 0;
}