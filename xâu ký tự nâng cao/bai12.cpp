#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy sắp xếp các từ thuận nghịch khác nhau trong xâu theo thứ tự từ chiều dài tăng dần, nếu 2 từ thuận nghịch có cùng chiều dài thì từ nào xuất hiện trước sẽ được in ra trước.

bool cmp(string a, string b){
    return a.size() < b.size();
}

bool tn(string s){
    string t = s;
    reverse(s.begin(), s.end());
    return s == t;
}

int main(){
    string s;
    vector<string> v;
    set<string> se;
    while(cin >> s){
        if(se.count(s) == 0 && tn(s)){
            v.push_back(s);
            se.insert(s);
        }
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(string x : v){
        cout << x << " ";
    }
    return 0;
}