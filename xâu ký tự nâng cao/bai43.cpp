#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll a, ll b){
    while(b){
        ll t = a % b; 
        a = b;
        b = t;
    }
    return a;
}

ll chiadu(string s, ll k){
    ll res = 0;
    for(int i = 0; i < s.length(); i++){
        res = (res*10 + s[i]-'0') % k;
    }
    return res;
}

int main(){
    string a; cin >> a;
    ll b; cin >> b;
    cout << gcd(b, chiadu(a, b));
    return 0;
}

// Cho 2 số N và M, hãy tìm ước chung lớn nhất của N và M. Chú ý ở đây N là một số nguyên lớn và M là một số nguyên 64 bit. Gợi ý : Dùng thuật toán Euclid.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là số nguyên dương M.

// Constraints

// N có không quá 1000 chữ số; M là 1 số nguyên 64 bit.

// Output Format

// In ra UCLN của N và M

// Sample Input 0

// 100
// 20
// Sample Output 0

// 20