#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s;
    vector<string> v;
    map<string, int> mp;
    while(cin >> s){
        if(mp.count(s) == 0){
            v.push_back(s);
        }
        mp[s]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl; 
    }
    cout << endl;
    for(string x : v){
        cout << x << " " << mp[x] << endl;
    }
    return 0;
}

// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy đếm xem mỗi từ trong xâu xuất hiện bao nhiêu lần, đầu tiên hãy liệt kê các từ trong xâu kèm theo tần suất của mỗi từ theo thứ tự từ điển, sau đó liệt kê các từ trong xâu theo thứ tự xuất hiện.

// Input Format

// Dòng duy nhất chứa xâu S.

// Constraints

// 1≤len(S)≤100000;

// Output Format

// Đầu tiên in ra các từ trong xâu và tần suất của nó theo thứ tự từ điển. Sau đó bỏ trống 1 dòng và in ra các từ trong xâu và tần suất của nó theo thứ tự xuất hiện trong xâu.

// Sample Input 0

// bb aa bb cc aa bb cc
// Sample Output 0

// aa 2
// bb 3
// cc 2

// bb 3
// aa 2
// cc 2