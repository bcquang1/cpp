#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho mảng A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là in ra số lớn nhất và nhỏ nhất của mọi mảng con cỡ K của mảng A[]
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    multiset<int> ms;
    for(int i = 0; i < k; i++) ms.insert(a[i]);
    auto it1 = ms.begin(), it2 = ms.end();
    it2--;
    cout << *it1 << " " << *it2 << endl;
    for(int i = k; i < n; i++){
        auto it = ms.find(a[i-k]);
        ms.erase(it);
        ms.insert(a[i]);
        auto it1 = ms.begin();
        auto it2 = ms.end();
        it2--;
        cout << *it1 << " " << *it2 << endl;
    }
    return 0;
}