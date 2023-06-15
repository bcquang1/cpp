#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll chiadu(string s, int k){
    ll res = 0;
    for(int i = 0; i < s.length(); i++){
        res = (res*10 + s[i]-'0') % k;
    }
    return res;
}

int main(){
    int a[] = {6, 8, 4, 2};
    string mu; cin >> mu;
    if(mu == "0") cout << 1;
    else cout << a[chiadu(mu, 4)];
    return 0;
}

// Cho số nguyên dương N là số nguyên lớn. Hãy tìm chữ số cuối cùng của 2008^n. Hay nói cách khác đề bài yêu cầu bạn tìm 2008^n % 10. Gợi ý, 2008^n % 10 = (2008 % 10) ^ n % 10 = 8 ^ n % 10. Mà 8 là lũy thừa của 2, vì thế chữ số cuối cùng cùng của 8^n cũng sẽ tuần hoàn với chu kỳ 4.

// Input Format

// Số nguyên dương N.

// Constraints

// N có không quá 1000 chữ số.

// Output Format

// In ra đáp án của bài toán.

// Sample Input 0

// 2
// Sample Output 0

// 4
// Explanation 0

// 2008^2=4032064