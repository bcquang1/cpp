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
        if(se2.count(x) == 0){
            cout << x << " ";
        }
    }
    return 0;
}

// Cho 2 xâu kí tự S và T. Hãy liệt kê các từ xuất hiện ở xâu S và không xuất hiện ở xâu T mà không phân biệt hoa thường, mỗi từ được liệt kê một lần theo thứ tự từ điển tăng dần.

// Input Format

// Dòng đầu tiên chứa xâu S. Dòng thứ hai chứa xâu T.

// Constraints

// 1≤len(S)≤10000; 1≤len(T)≤10000; Xâu S và T chỉ bao gồm chữ cái và dấu cách.

// Output Format

// In ra các từ theo thứ tự từ điển, các từ cách nhau một dấu cách và in theo thứ tự từ điển tăng dần.

// Sample Input 0

// aa AA abc abcd zzaA
// ABc ABCd uuzka aka opl
// Sample Output 0

// aa zzaa