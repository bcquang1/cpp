#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s;
    vector<string> v;
    map<string, int> mp;
    while(cin >> s){
        mp[s]++;
    }
    int min_fre = 1e9, max_fre = 0;
    string res1, res2;
    for(auto it : mp){
        if(it.second >= max_fre){
            max_fre = it.second;
            res1 = it.first;
        }
        if(it.second <= min_fre){
            min_fre = it.second;
            res2 = it.first;
        }
    }
    cout << res1 << " " << max_fre << endl;
    cout << res2 << " " << min_fre << endl; 
    return 0;
}

// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách. Hãy tìm từ có số lần xuất hiện nhiều nhất và ít nhất trong xâu, nếu có nhiều từ có cùng số lần xuất hiện nhiều nhất hoặc ít nhất thì chọn từ có thứ tự từ điển lớn nhất làm kết quả.

// Input Format

// Dòng duy nhất chứa xâu S.

// Constraints

// 1≤len(S)≤100000;

// Output Format

// Dòng đầu tiên in ra từ có số lần xuất hiện nhiều nhất. Dòng thứ 2 in ra từ có số lần xuất hiện ít nhất.

// Sample Input 0

// aa bb cc aa bb aa aa cc
// Sample Output 0

// aa 4
// cc 2