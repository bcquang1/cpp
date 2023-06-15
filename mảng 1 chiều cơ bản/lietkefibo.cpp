#include <bits/stdc++.h>
#define ll long long

using namespace std;

int check(ll n){
    if(n == 0 || n == 1) return 1;
    ll f0 = 0, f1 = 1;
    for(int i = 3; i <= 93; i++){
        ll fn = f0 + f1;
        if(n == fn) return 1;
        f0 = f1;
        f1 = fn;
    }
    return 0;
}

int main(){
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ok = 0;
    for(int i = 0; i < n; i++){
        if(check(a[i])){
            cout << a[i] << " ";
            ok = 1;
        }
    }
    if(ok == 0) cout << "NONE";
    return 0;
}

// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^6; 0<=A[i]<=10^18

// Output Format

// In ra các số là số Fibonacci trong dãy theo thứ tự xuất hiện. Nếu trong mảng không tồn tại số Fibonacci nào thì in ra "NONE".

// Sample Input 0

// 6
// 1597 25358 7318 5878 0 2634 
// Sample Output 0

// 1597 0 