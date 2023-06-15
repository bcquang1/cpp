#include <bits/stdc++.h>
#define ll long long

using namespace std;

int x;
bool comp(int a, int b){
    int k1 = abs(a-x), k2 = abs(b-x);
    if(k1 != k2) return k1 < k2;
    return a < b;
}

bool comp2(int a, int b){
    if(a % 2 == 0 && b % 2 == 0) return a < b;
    if(a % 2 == 1 && b % 2 == 1) return a > b;
    if(a % 2 == 0 && b % 2 == 1) return true;
    else return false;
}

int main(){
    int n; cin >> n;
    int a[n]; 
    for(int &x : a) cin >> x;
    sort(a, a+n, comp);    
    for(int x : a) cout << x << " ";
    cout << endl;
    sort(a, a+n, comp2);
    for(int x : a) cout << x << " ";
    return 0;
}