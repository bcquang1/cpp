#include <bits/stdc++.h>
#define ll long long
using namespace std;


int nt(int n){
    for(int i = 2; i<= sqrt(n); i++){
        if(n % i == 0){
            int mu = 0;
            while(n % i == 0){
                mu++;
                n /= i;
            }
            if(mu == 1) return 0;
        }
    }
    if(n > 1) return 0;
    return 1;
}


int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(nt(i)) cout << i << " ";
    }
    return 0;
}