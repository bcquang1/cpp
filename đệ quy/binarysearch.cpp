#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho một mảng số nguyên A gồm N phần tử đã được sắp xếp giảm dần, hãy viết hàm tìm kiếm nhị phân bằng đệ quy để kiểm tra xem phần tử X có nằm trong mảng hay không.

int bi(int a[], int n, int l, int r, int x){
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] == x) return 1;
        else if(a[m] < x) return bi(a, n, l, m - 1, x);
        else return bi(a, n, m + 1, r, x);
    }
    return 0;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &z : a) cin >> z;
    int x; cin >> x;
    if(bi(a, n, 0 , n - 1, x)) cout << 1;
    else cout << 0;
    return 0;
}