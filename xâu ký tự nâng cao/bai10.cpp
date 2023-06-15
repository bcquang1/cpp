#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy liệt kê các từ khác nhau trong xâu S, đầu tiên hãy liệt kê các từ khác nhau theo thứ tự từ điển tăng dần, sau đó liệt kê các từ theo thứ tự xuất hiện trong xâu.Dòng đầu tiên in ra các trong xâu theo thứ tự từ điển. Dòng thứ hai in ra các từ theo thứ tự xuất hiện trong xâu. Chú ý không in dấu cách thừa sau từ cuối cùng của từng dòng.
int main(){
    string s;
    set<string> se;
    vector<string> v;
    while(cin >> s){
        if(se.count(s) == 0){
            v.push_back(s);
            se.insert(s);
        }
    }
    for(string x : se){
        cout << x << " ";
    }
    cout << endl;
    for(string x : v){
        cout << x << " ";
    }
    return 0;
}