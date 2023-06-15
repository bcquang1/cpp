#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    set<int> se;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp.insert({a[i],1});
    }
    cout << mp.size() << endl;
    return 0;
}