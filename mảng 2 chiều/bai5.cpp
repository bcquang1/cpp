#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    for(int i = n - 1; i >= 0; i--){
        for(int j = n - 1; j >= 0; j--){
            cout << a[i][j] << endl;
        }
        cout << endl;
    }
    for(int j = n - 1; j >= 0; j--){
        for(int i = 0; i < n; i++){
            cout << a[i][j] << endl;
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= 0; j--){
            cout << a[i][j] << endl; 
        }
        cout << endl;
    }
    return 0;
}