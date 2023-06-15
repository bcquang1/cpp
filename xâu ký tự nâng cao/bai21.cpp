#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    set<string> se1, se2;
    stringstream ss1(s), ss2(t);
    string tmp;
    while(ss1 >> tmp){
        se1.insert(tmp);
    }
    while(ss2 >> tmp){
        se2.insert(tmp);
    }
    for(string x : se1){
        if(se2.count(x) == 1){
            cout << x << " ";
        }
    }
    return 0;
}

// Cho 2 xâu kí tự S và T. Hãy liệt kê các từ xuất hiện ở cả 2 xâu mà không phân biệt hoa thường, mỗi từ được liệt kê một lần theo thứ tự từ điển tăng dần.

// Input Format

// Dòng đầu tiên chứa xâu S. Dòng thứ hai chứa xâu T.

// Constraints

// 1≤len(S)≤10000; 1≤len(T)≤10000; Xâu S và T chỉ bao gồm chữ cái và dấu cách.

// Output Format

// In ra các từ xuất hiện ở cả 2 xâu theo thứ tự từ điển tăng dần, mỗi từ được liệt kê 1 lần và in ra ở dạng chữ in thường.

// Sample Input 0

// abc abc abcd abcd AB
// abC CD ZAH abd ABcD
// Sample Output 0

// abc abcd