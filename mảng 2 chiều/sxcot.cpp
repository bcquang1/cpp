#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n], b[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        sort(b[i],b[i]+n);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << b[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}