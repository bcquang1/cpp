#include <bits/stdc++.h>
#define ll long long

using namespace std;

int f[1000001];

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i< n; i++) f[a[i]]++;
    int max_fre_val = a[0];
    for(int i = 1; i < n; i++){
        if(f[a[i]] > f[max_fre_val]) max_fre_val = a[i];
    }
    cout << max_fre_val << " " << f[max_fre_val] << endl;
    return 0;
}