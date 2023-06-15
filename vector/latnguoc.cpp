#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    vector<int> v;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int l ,r; cin >> l >> r;
    reverse(v.begin(), v.end());
    for(int x : v) cout << x << " ";
    cout << endl;
    reverse(v.begin()+l, v.begin()+r+1);
    for(int x : v) cout << x << " "; 
    return 0;
}