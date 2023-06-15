#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string n;
    getline(n);
    if(n.size() % 2 == 0){
        cout << "NOT FOUND";
    }
    else{
        cout << s[n/2+1];
    }
    return 0;
}