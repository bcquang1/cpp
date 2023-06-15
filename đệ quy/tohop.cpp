#include <bits/stdc++.h>
#define ll long long

using namespace std;


int c(int n, int k){
    if(k == 0 || k == n) return 1;
    else return c(n-1,k-1) + c(n-1,k);
}

int main(){
    int n, k; cin >> n >> k;
    cout << c(n, k);
    return 0;
}