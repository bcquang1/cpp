#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp) {
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for(string x : v) cout << x << " ";
    
    return 0;
}