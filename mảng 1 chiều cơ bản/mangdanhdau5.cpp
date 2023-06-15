#include <bits/stdc++.h>
#define ll long long

using namespace std;

int f[1000001];

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i< n; i++) f[a[i]]++;
    int max_fre_val = a[0];
    for(int i = 1; i < n; i++){
        if(f[a[i]] > f[max_fre_val]) max_fre_val = a[i];
    }
    cout << max_fre_val << " " << f[max_fre_val] << endl;
    return 0;
}

// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy giá trị xuất hiện trước theo thứ tự trong mảng

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

// Constraints

// 1<=N<=1000; 0<=A[i]<=10^6;

// Output Format

// In ra giá trị có số lần xuất hiện nhiều nhất kèm theo tần suất của nó

// Sample Input 0

// 6
// 7 2 0 3 9 5 
// Sample Output 0

// 7 1
// Sample Input 1

// 4
// 1 2 2 1
// Sample Output 1

// 1 2