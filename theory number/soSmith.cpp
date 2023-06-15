#include <bits/stdc++.h>

using namespace std;

// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các thừa số nguyên tố trong phân tích của N. Ví dụ N = 666 có các thừa số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^8.

// Output Format

// In ra YES nếu N là số Smith, ngược lại in ra NO.


int checknt(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int tongcs(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int smith(int n){
    int sum = 0, m = n;
    if(checknt(n)) return 0;
    for(int i = 2; i <= sqrt(n); i ++){
        if(n % i == 0){
            while(n % i == 0){
                sum += tongcs(i);
                n /= i;
            }
        }
    }
    if(n != 1) sum += tongcs(n);
    if(sum == tongcs(m)) return 1;
    return 0;
}

int main(){
    int n; cin >> n;
    if(smith(n)) cout << "YES";
    else cout << "NO";
    return 0;
}