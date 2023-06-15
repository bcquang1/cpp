#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự từ nhỏ đến lớn kèm theo tần suất của nó

int f[1000001];
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++) f[a[i]]++;
    for(int i = 0; i <= 1e6; i++) {
        if(f[i] > 0) cout << i << " " << f[i] << endl;
    }
    return 0;
}