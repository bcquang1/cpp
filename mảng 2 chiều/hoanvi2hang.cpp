#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int h1, h2; cin >> h1 >> h2;
    for(int i = 0; i < n; i++){
        swap(a[h1-1][i], a[h2-1][i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}