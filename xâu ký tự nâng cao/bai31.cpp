#include <bits/stdc++.h>
#define ll long long

using namespace std;

int tcs(string s){
    int sum = 0;
    for(char x : s){
        sum += x - '0';
    }
    return sum;
}

int main(){
    string s; cin >> s;
    cout << tcs(s);

    return 0;
}