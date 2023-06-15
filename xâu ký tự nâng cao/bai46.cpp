#include <bits/stdc++.h>
#define ll long long

using namespace std;

int chiadu(string s, int k){
    int res = 0;
    for(int i = 0; i < s.length(); i++){
        res = (res*10 + s[i]-'0') % k;
    }
    return res;
}

int main(){
    int a2[] = {1, 2, 4, 3};
    int a3[] = {1, 3, 4, 2};
    int a4[] = {1, 4};
    string n; cin >> n;
    int res = (1 + a2[chiadu(n, 4)] + a3[chiadu(n, 4)] + a4[chiadu(n, 2)]) % 5;
    cout << res;
}

// Yêu cầu tính (1^n + 2^n + 3^n +4^n) % 5, trong đó n là số nguyên lớn.

// Input Format

// Số nguyên không âm n.

// Constraints

// n có không quá 1000 chữ số.

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 0
// Sample Output 0

// 4