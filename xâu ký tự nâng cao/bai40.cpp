#include <bits/stdc++.h>
#define ll long long

using namespace std;

int chiadu(string s, int k){
    int res = 0;
    for(int i = 0; i < s.length(); i++){
        res = (res*2 + s[i]-'0') % k;
    }
    return res;
}

int main(){
    string s; cin >> s;
    int k = 5;
    if(chiadu(s, k) == 0)cout << "YES";
    else cout << "NO";
    return 0;
}

//method 2
// int chiadu(string s){
//     int k = 1;
//     int res = 0;
//     for(int i = s.length()-1; i >= 0; i--){
//         res = res + (s[i]-'0')*k;
//         res %= 5;
//         k *= 2;
//         k %= 5;
//     }
//     return res;
// }
// int main(){
//     string s; cin >> s;
//     if(chiadu(s) == 0) cout << "YES";
//     else cout << "NO";
// }

// Cho số nhị phân N, hãy kiểm tra xem N có chia hết cho 5 hay không.

// Input Format

// Số N ở dạng nhị phân

// Constraints

// N có không quá 1000 bit.

// Output Format

// In ra YES nếu N chia hết cho 5, ngược lại in ra NO.

// Sample Input 0

// 1010
// Sample Output 0

// YES
// Sample Input 1

// 1010
// Sample Output 1

// YES
// Sample Input 2

// 1010
// Sample Output 2

// YES