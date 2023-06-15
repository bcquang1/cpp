#include <bits/stdc++.h>
#define ll long long

using namespace std;

int d[1000005] = {0};

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        d[a[i]]++;
    }
    int max_fre_val = a[0];
    for(int i = 0; i < n;i++){
        if(d[a[i]] > d[max_fre_val] || d[a[i]] == d[max_fre_val] && a[i] < max_fre_val){
            max_fre_val = a[i];
        }
    }
    cout << max_fre_val << " " << d[max_fre_val];
    return 0;
}

// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy số có giá trị nhỏ nhất

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

// Constraints

// 1<=N<=1000; 0<=A[i]<=10^6;

// Output Format

// In ra giá trị có số lần xuất hiện nhiều nhất kèm theo tần suất của nó

// Sample Input 0

// 5
// 9 4 0 4 5 
// Sample Output 0

// 4 2
// Sample Input 1

// 5
// 1 3 7 7 5 
// Sample Output 1

// 7 2