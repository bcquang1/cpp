#include <bits/stdc++.h>
#define ll long long 

using namespace std;


int main(){
   int n; cin >> n;
   int a[10000];
   for(int i = 0 ; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++){
    int ok = 1;
    for(int j = 0; j < i ; j++){
        if(a[i] == a[j]){
            ok = 0;
            break;
        }
    }
    if(ok) cout << a[i] << " ";
   }
   
}