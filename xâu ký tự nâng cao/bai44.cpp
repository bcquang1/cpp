#include <bits/stdc++.h>
#define ll long long

using namespace std;
int MOD = 1e9 + 7;
ll powMod(ll a, ll n){
    if(n == 0) return 1;
    ll x = powMod(a, n/2);
    if(n % 2 == 0) return (x * x) % MOD;
    else return ((a%MOD)*(x*x%MOD)) % MOD;
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
    cout << powMod(chiadu(a,MOD), b);
    return 0;
}

// Cho 2 số N và M, hãy tính N^M%(10^9 + 7). Trong đó N là một số nguyên lớn, M là một số nguyên 64 bit. Gợi ý : Để làm được bài này các bạn phải sử dụng lũy thừa nhị phân để tránh Time Limit.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là số nguyên dương M.

// Constraints

// N có không quá 1000 chữ số; M là 1 số nguyên 64 bit.

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 2
// 10
// Sample Output 0

// 1024