#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho dãy số A[] gồm có N phần tử, bạn hãy trả lời các truy vấn để xác định xem phần tử X nào đó có nằm trong mảng hay không? Bạn hãy thử giải bài này bằng 3 cách : Set, Map, Binary Search.
// int main(){
//     int n; cin >> n;
//     set<int> se;
//     for(int i = 0; i < n; i++){
//         int x; cin >> x;
//         se.insert(x);
//     }
//     int q; cin >> q;
//     while(q--){
//         int x; cin >> x;
//         if(se.find(x) == se.end()) cout << "NO" << endl;
//         else cout << "YES" << endl;
//     }
//     return 0;
// }

// binarysearch
int binarysearch(int a[], int n, int l, int r, int x){
    while(l < r){
        int m = (l+r)/2;
        if(a[m] == x) return 0;
        else if(a[m] < x) return binarysearch(a, n, m+1, r, x);
        else return binarysearch(a, n, l , m-1, x);
    }
    return 0;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int q; cin >> q;
    while(q--){
        int x; cin >>x;
        if(binarysearch(a, n, 0, n-1, x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}