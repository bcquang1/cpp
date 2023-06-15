#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    while(b){
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        for(int j = i + 1; j <= b; j++){
            if(gcd(i ,j) == 1) cout << "(" << i << "," << j << ")" << endl;
        }
    }
    return 0;
}