#include <bits/stdc++.h>
#define ll long long

using namespace std;

int kg(string s){
    for(int i = 1; i < s.length(); i++){
        if(s[i] < s[i-1]) return 0;
    }
    return 1;
}

int kt(string s){
    for(int i = 1; i < s.length(); i++){
        if(s[i] > s[i-1]) return 0;
    }
    return 1;
}
int main(){
    string s; cin >> s;
    if(kg(s) || kt(s)) cout << "YES";
    else cout << "NO";
    return 0;
}

// Một số được coi là số đẹp nếu nó có các chữ số không giảm từ trái qua phải hoặc không tăng từ trái quá phải, ví dụ số 1233333345 là số không giảm, số 5555555543 là số không tăng. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

// Input Format

// Số nguyên dương N.

// Constraints

// N có không quá 1000 chữ số.

// Output Format

// In ra YES nếu N là số đẹp ngược lại lại ra NO.

// Sample Input 0

// 12377788888888888888888888888888888888888888888889
// Sample Output 0

// YES
// Sample Input 1

// 8128777888888889
// Sample Output 1

// NO