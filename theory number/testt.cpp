#include <bits/stdc++.h>
#define ll long long
using namespace std;

int nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

int cs(int n){
    while(n){
        int r = n % 10;
        if(nt(r) == 0) return 0;
        n /= 10;
    }
    return 1;
}

int tcs(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    if(nt(sum)) return 1;
    else return 0;
}
int main(){
    int a ,b; cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(cs(i) && tcs(i) && nt(i)) cnt++;
    }
    cout << cnt;
    return 0;
}