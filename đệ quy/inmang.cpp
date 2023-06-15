#include <bits/stdc++.h>
#define ll long long

using namespace std;

void init(int a[], int n, int i){
    if(i == n) return;
    else {
        cout << a[i] << " ";
        init(a, n, i+1);
    }
}

void init2(int a[], int n, int i){
    if(i < 0) return;
    else {
        cout << a[i] << " ";
        init2(a, n, i-1); 
    }
}

int main(){
    int n; cin >> n; 
    int a[n];
    for(int &x : a) cin >> x;
    init(a, n, 0);
    cout << endl;
    init2(a, n, n - 1);
    return 0;
}