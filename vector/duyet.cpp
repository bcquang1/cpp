#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho vector V có N phần tử, nhiệm vụ của bạn in ra các phần tử từ chỉ số L tới chỉ số R sau đó in ra các phần tử từ chỉ số R tới chỉ số L bằng cách dùng iterator.
int main(){
    vector<int> v;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int l, r; cin >> l >> r;
    for(auto it = v.begin()+l; it <= v.begin()+r; it++){
        cout << *it << " ";
    }
    cout << endl;
    for(auto it = v.begin()+r; it >= v.begin()+l; it--){
        cout << *it << " ";
    }
}