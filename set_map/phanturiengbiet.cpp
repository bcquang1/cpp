#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho dãy số A[] gồm có N phần tử, bạn hãy liệt kê các giá trị xuất hiện trong dãy theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê một lần.
int main(){
    int n; cin >> n;
    int a[n];
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(mp[a[i]] != 0){
            cout << a[i] << " ";
            mp[a[i]] = 0;
        }
    }
    return 0;
}
