#include <bits/stdc++.h>
#define ll long long

using namespace std;

int check(int a[], int n, int i){
    if(i == n - 1) return 1;
    else {
        if(a[i] < a[i + 1]) return check(a, n,i + 1);
        else return 0;
    }
}


int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(check(a, n, 0)) cout << "YES";
    else cout << "NO";
    return 0;
}