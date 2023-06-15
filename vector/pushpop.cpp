#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho vector và 2 thao tác. Thao tác 1 : Thêm 1 phần tử và cuối vector. Thao tác 2 : Xóa phần tử khỏi cuối vector nếu vector không rỗng. Nhiệm vụ của bạn là thực hiện 1 loạt các thao tác này và in ra mảng sau khi thực hiện xong mọi thao tác. Nếu vector rỗng in ra Emtpy, ngược lại in ra các phần tử trong vector trên 1 dòng.
int main(){
    vector<int> v;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        if(t == 1){
            int x; cin >> x;
            v.push_back(x);
        }
        else if(v.size()){
            v.pop_back();
        }
    }
    if(v.size()){
        for(int x : v) cout << x << " ";
    }
    else cout << "EMPTY";
    return 0;
}