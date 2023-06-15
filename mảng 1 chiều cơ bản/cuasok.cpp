#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    int cur_sum = 0;
    for(int i = 0; i < k; i++){
        cur_sum += a[i];
    }
    cout << cur_sum << " ";
    for(int i = k; i < n; i++){
        cur_sum = cur_sum - a[i-k] + a[i];
        cout << cur_sum << " ";
    }
    return 0;
}

// Cho mảng số nguyên A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là tìm tổng của mọi dãy con liên tiếp cỡ K của mảng A[]

// Input Format

// Dòng đầu tiên là 2 số nguyên dương N, K; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

// Constraints

// 1<=K<=N<=1000; 0<=A[i]<=10^3;

// Output Format

// In ra tổng của các dãy con K phần tử liên tiếp trong mảng

// Sample Input 0

// 7 5
// 5 9 4 5 5 8 7 
// Sample Output 0

// 28 31 29 
// Explanation 0

// 5 + 9 + 4 + 5 + 5 = 28 9 + 4 + 5 + 5 + 8 = 31 4 + 4 + 4 + 8 + 7 = 29

// Sample Input 1

// 6 3
// 3 8 6 8 0 0 
// Sample Output 1

// 17 22 14 8 