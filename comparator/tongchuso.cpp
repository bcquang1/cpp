#include <bits/stdc++.h>
#define ll long long

using namespace std;

int sumDigit(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool comp(int x, int y){
    int sum1 = sumDigit(x), sum2 = sumDigit(y);
    return sum1 < sum2;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    stable_sort(a, a + n, comp);
    for(int x : a) cout << x << " ";    
    return 0;
}