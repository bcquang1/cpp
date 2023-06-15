#include <bits/stdc++.h>
#define ll long long

using namespace std;

int nto(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

int main(){
    int n; cin >> n;
    int a[n], sum = 0;
    for(int &x : a){
        cin >> x;
        sum += x;
    }
    int sum_left = 0, sum_right = 0;
    for(int i = 1; i < n - 1; i++){
        sum_left += a[i-1];
        sum_right = sum - sum_left - a[i];
        if(nto(sum_left) && nto(sum_right)) cout << i << " ";
    }
    return 0;
}