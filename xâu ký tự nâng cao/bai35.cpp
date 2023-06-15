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
    string s; cin >> s;
    int k = 4;
    if(chiadu(s, k) == 0)cout << "YES";
    else cout << "NO";
    return 0;
}

// method 2
// int main(){
//     string s; cin >> s;
//     s = s + '0';
//     int k = stoi(s.substr(s.length()-2));
//     if(k % 4 == 0) cout << "YES";
//     else cout << "NO";
// }

// Kiểm tra một số nguyên N có phải là số chia hết cho 6 hay không? Số chia hết cho 6 nếu nó chia hết cho cả 2 và 3.

// Input Format

// Số nguyên dương N.

// Constraints

// N có không quá 1000 chữ số.

// Output Format

// In YES nếu N là số chia hết cho 6, ngược lại in NO.

// Sample Input 0

// 360
// Sample Output 0

// YES