#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho dãy số A[] gồm có N phần tử, có 3 thao tác như sau :

// Thao tác 1 : Thêm 1 phần tử X vào mảng.

// Thao tác 2 : Xóa 1 phần tử X khỏi mảng. Trong trường hợp phần tử X không xuất hiện trong mảng, sẽ không thực hiện xóa, nếu trong mảng có nhiều phần tử X thì chỉ xóa đi 1 phần tử X trong mảng.

// Thao tác 3 : Truy vấn xem phần tử X có xuất hiện trong mảng hay không?

// Ban đầu mảng A có N phần tử, với các truy vấn phần tử X trong mảng, in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.
int main(){
    multiset<int> ms;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ms.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int tt, x; cin >> tt >> x;
        if(tt == 1){
            ms.insert(x);
        }
        else if(tt == 2){
            auto it = ms.find(x);
            if(it != ms.end()){
                ms.erase(it);
            }
        }
        else {
            if(ms.find(x) != ms.end()){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }
    return 0;
}