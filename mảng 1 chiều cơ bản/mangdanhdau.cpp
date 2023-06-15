#include <bits/stdc++.h>
#define ll long long

using namespace std;

int f[1000001];
//dem gia tri khac nhau
// int main(){
//     int n; cin >> n;
//      int a[n], cnt = 0;
//     for(int &x : a) cin >> x;
//     for(int i = 0; i < n; i++){
//         if(f[a[i]] == 0){
//             cnt++;
//             f[a[i]] = 1;
//         }
//     }
//     cout << cnt;
//     return 0;
// }

int main(){
    int n; cin >> n; 
    int a[n], cnt = 0;
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i ++) f[a[i]]++;
    for(int i = 0; i <= 1e6; i++){
        if(f[i] > 0) cnt++;
    }
    cout << cnt;
}