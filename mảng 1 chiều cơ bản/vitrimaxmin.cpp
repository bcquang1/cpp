#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int max = -1e9, i_max, min = 1e9, i_min;
    for(int i = 0; i < n; i++){
        if(a[i] <= min){
            min = a[i];
            i_min = i;
        }
        if(a[i] > max){
            max = a[i];
            i_max = i;
        }
    }
    cout << i_min << " " << i_max;
    return 0;
}
