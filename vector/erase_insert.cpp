#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho vector và 2 thao tác. - Thao tác 1 : Chèn phần tử vào vị trí bất kì trong vector.

// Thao tác 2 : Xóa phần tử ở vị trí bất kì trong vector.

// Đối với thao tác thứ 1, giả sử vector đang có N phần tử, chỉ số chèn hợp lệ sẽ là từ 0 tới N, ngoài ra các vị trí không hợp lệ sẽ không thực hiện chèn. Tương tự đối với thao tác thứ 2, giả sử vector đang có N phần tử thì chỉ số xóa hợp lệ sẽ là từ 0 tới N - 1, nếu vị trí xóa không hợp lệ hoặc vector sẽ không thực hiện xóa.

// Nhiệm vụ của bạn là thực hiện 1 loạt các thao tác này và in ra mảng sau khi thực hiện xong mọi thao tác. Nếu vector rỗng in ra Emtpy, ngược lại in ra các phần tử trong vector trên 1 dòng.
int main(){
    vector<int> v;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int q; cin >> q;
    while(q--){
        int t; cin >> t;
        if(t == 1){
            int index, val;
            cin >> index >> val;
            if(index >= 0 && index <= v.size()){
                v.insert(v.begin() + index, val);
            }
        }
        else {
            int index; cin >> index;
            if(index >= 0 && index <= v.size() - 1){
                v.erase(v.begin() + index);
            }
        }
    }
    if(v.size()){
        for(int x : v) cout << x << " ";
    }
    else cout << "EMPTY";
    return 0;
}