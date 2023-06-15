#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool nt(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}

bool check(string s){
    int tong = 0;
    for(char x : s){
        tong += x - '0';
        if(x != '2' && x != '3' && x != '5' && x != '7') return false;
    }
    return nt(tong);
}

int main(){
    string s; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
    return 0;
}

// Một số được coi là số đẹp nếu nó có tất cả các chữ số là số nguyên tố và tổng các chữ số của nó cũng là số nguyên tố. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

// Input Format

// Số nguyên dương N

// Constraints

// N có không quá 1000 chữ số.

// Output Format

// In ra YES nếu N là số đẹp, ngược lại in ra NO.

// Sample Input 0

// 373
// Sample Output 0

// YES