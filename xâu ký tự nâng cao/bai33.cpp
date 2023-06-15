#include <bits/stdc++.h>
#define ll long long

using namespace std;

int tn(string s){
    string tmp = s;
    reverse(s.begin(), s.end());
    return tmp == s;
}

int check(string s){
    for(char c : s){
        if(c == '6') return 1;
    }
    return 0;
}

int main(){
    string s; cin >> s;
    if(tn(s) && check(s)) cout << "YES";
    else cout << "NO";
    return 0;
}

// Một số được coi là số đẹp nếu nó là số thuận nghịch và chứa ít nhất 1 chữ số 6. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

// Input Format

// Số nguyên dương N

// Constraints

// N có không quá 1000 chữ số.

// Output Format

// In ra YES nếu N là số đẹp, ngược lại in ra NO.

// Sample Input 0

// 6433987866217635596629171229463963223693649221719266955367126687893346
// Sample Output 0

// YES