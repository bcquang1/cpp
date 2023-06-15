#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool p[10000001];

void sang(){
    for(int i = 0; i <= 1e7; i++){
        p[i] = true;
    }
    p[0] = p[1] = false;
    for(int i = 2; i <= sqrt(1e7); i++){
        if(p[i]){
            for(int j = i * i; j <= 1e7; j += i){
                p[j] = false;
            }
        }
    }
}

int main(){
    
    return 0;
}