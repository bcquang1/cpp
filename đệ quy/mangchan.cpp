#include <bits/stdc++.h>
#define ll long long

using namespace std;

int check(int a[], int n, int i){
    if(i == n) return 1;
    else{
        if(a[i] % 2 == 0) return check(a, n, i+1);
        else return 0;
    }
}


int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(check(a, n, 0)) cout << "YES";
    else cout << "NO";
    return 0;
}