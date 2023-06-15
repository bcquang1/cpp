#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho vector V có N phần tử, nhiệm vụ của bạn là sắp xếp các phần tử trong vector theo thứ tự tăng dần, giảm dần sau đó in ra bằng cách dùng iterator.
int main(){
    vector<int> v;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int x : v) cout << x << " ";
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for(auto it = v.begin(); it != v.end(); it++) cout << *it << " ";
    return 0;
}