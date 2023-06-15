#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho một dãy số nguyên chưa biết trước số lượng phần tử, hãy đếm tần xuất hiện của các số nguyên tố trong dãy và in ra theo thứ tự xuất hiện trong dãy

int nto(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

int main(){
    map<int, int> mp;
    vector<int> v;
    int x; 
    while(cin >> x){
        if(mp[x] == 0 && nto(x)){
            v.push_back(x);
        }
        mp[x]++;
    }
    for(int x : v) cout << x << " " << mp[x] << endl;
    return 0;
}