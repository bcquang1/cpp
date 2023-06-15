#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int n, x; cin >> n >> x;
    int a[n]; 
    for(int &z : a) cin >> z;
    int index = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            index = i;
            break;
        }
    }
    if(index == -1) cout << "NOT FOUND" << endl;
    else{
        for(int i = 0; i < n; i++){
            if(i != index) cout << a[i] << " ";
        }
    }
}