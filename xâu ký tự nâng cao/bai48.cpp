#include <bits/stdc++.h>
#define ll long long

using namespace std;

string tcs(string s){
    int sum = 0;
    for(char c : s){
        sum += c - '0';
    }
    return to_string(sum);
}
int check(string s){
    while(s.length() >= 2){
        s = tcs(s);
    }
    if(s == "9") return 1;
    return 0;
}

int main(){
    string n; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
    return 0;
}

// Một số nguyên không âm n được gọi là số may mắn nếu tổng các chữ của n bằng 9 hoặc tổng các chữ số của n là số may mắn. Ví dụ các số 9, 108, 279 là các số may mắn, còn các số 19, 289 không phải là số may mắn.

// Input Format

// Số nguyên dương N.

// Constraints

// N có không quá 1000 chữ số.

// Output Format

// In ra YES nếu N là số may mắn, ngược lại in ra NO.

// Sample Input 0

// 18
// Sample Output 0

// YES