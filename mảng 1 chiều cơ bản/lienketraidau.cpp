#include <bits/stdc++.h>
#define ll long long 

using namespace std;



int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(1ll*a[0] * a[1] < 0) cout << a[0] << " ";
    for(int i = 1; i < n-1; i ++){
        if(1ll * a[i] * a[i + 1] < 0 || 1ll * a[i] * a[i - 1] < 0) cout << a[i] << " ";
    }
    if(1ll * a[n-1] * a[n - 2] < 0) cout << a[n - 1];
}

// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê theo thứ tự xuất hiện các số thỏa mãn có ít nhất 1 số trái dấu với nó đứng cạnh nó.

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 2<=N<=10^6; -10^6<=A[i]<=10^6

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 9
// -992414 993205 998602 990785 -993397 990527 995429 991288 -992221 
// Sample Output 0

// -992414 993205 990785 -993397 990527 991288 -992221 