#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, đầu tiên hãy sắp xếp các từ trong xâu theo thứ tự từ điển tăng dần, sau đó sắp xếp các từ trong xâu theo thứ tự chiều dài tăng dần, trong trường hợp có nhiều từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ in ra trước.Dòng đầu tiên in ra các từ trong xâu theo thứ tự từ điển tăng dần. Dòng thứ 2 in ra các từ trong xâu theo thứ tự chiều dài tăng dần, trong trường hợp có nhiều từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ in ra trước. Các từ được in cách nhau một dấu cách.

bool cmp(string a, string b){
    if(a.size() != b.size())
        return a.size() < b.size();
    else 
        return a < b;
}

int main(){
    string s;
    vector<string> v;
    while(cin >> s){
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    for(string x : v) cout << x << " ";
    cout << endl;
    sort(v.begin(), v.end(), cmp);
    for(string x : v) cout << x << " ";
    cout << endl;
    return 0;
}