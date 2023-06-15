#include <bits/stdc++.h>
#define ll long long

using namespace std;

string solve(char c){
    string a[] = {"", "", "2", "3", "322", "5", "35", "7", "2227", "3327"};
    return a[c-'0'];
}

int main(){
    string s; cin >> s;
    string res = "";
    for(char c : s){
        res += solve(c);
    }
    sort(res.begin(), res.end(), greater<char>());
    cout << res;
    return 0;
}

// Axe chơi một trò chơi với Lina. Họ định nghĩa hàm F(x) với số x nguyên dương là tích giai thừa các chữ số của x. Ví dụ F(135) = 1! * 3! * 5! = 720. Đầu tiên, họ chọn một số a có n chữ số và có ít nhất một chữ số lớn hơn 1, có thể có chữ số không ở đầu. Sau đó họ tìm một số nguyên dương x lớn nhất thỏa mãn: 1. X không chứa chữ số 0 hoặc 1 2. F(x) = F(a) Hãy giúp Axe và Lina tìm ra được số đó.

// Input Format

// Dòng duy nhất chưa số a có n chữ số.

// Constraints

// 1<=n<=1000.

// Output Format

// In ra số X tìm được

// Sample Input 0

// 1234
// Sample Output 0

// 33222