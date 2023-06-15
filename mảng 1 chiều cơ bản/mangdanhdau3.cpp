#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự xuất hiện trong mảng kèm theo tần suất của nó, mỗi giá trị chỉ liệt kê một lần

int d[1000001];
int used[1000001];

// int main(){
//     int n; cin >>n;
//     int a[n];
//     for(int &x : a) cin >> a;
//     for(int i = 0; i < n; i++) d[a[i]]++;
//     for(int i = 0; i <= 1e6; i++){
//         if(used[a[i]] == 0){
//             cout << a[i] << " " << d[a[i]] << endl;
//             used[a[i]] = 1;
//         }
//     }
//     return 0;
// }

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++) d[a[i]]++;
    for(int i = 0; i < n; i++){
        if(d[a[i]] > 0){
            cout << a[i] << " " << d[a[i]] << endl;
            d[a[i]] = 0;
        }
    }
}