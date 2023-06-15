#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử ĐÃ SẮP XẾP TĂNG DẦN và số nguyên X, nhiệm vụ của bạn là :

// In ra chỉ số đầu tiên của phần tử >= X trong mảng, nếu không có phần tử nào >=X thì in ra -1.
// In ra chỉ số đầu tiên của phần tử > X trong mảng, nếu không có phần tử nào > X thì in ra - 1.
// In ra chỉ số đầu tiên của phần tử X trong mảng, nếu X không tồn tại in ra -1.
// In ra chỉ số cuối cùng của phần tử X trong mảng, nếu X không tồn tại in ra -1.
// Từ kết quả của 3 và 4 in ra số lần xuất hiện của X trong mảng.
// CHÚ Ý : Bạn code với 2 trường hợp, sử dụng mảng và vector, chỉ sử dụng hàm lower_bound và upper_bound

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    //1
    auto it1 = lower_bound(a, a + n, x);
    if(it1 == a + n) cout << -1 << endl;
    else cout << it1 - a << endl;
    //2
    auto it2 = upper_bound(a, a + n, x);
    if(it2 == a + n) cout << -1 << endl;
    else cout << it2 - a << endl;
    //3
    if(*it1 == x) cout << it1 - a << endl;
    else cout << -1 << endl;
    //4
    auto it3 = it1;
    if(it2 == a) cout << -1 << endl;
    else {
        it3 = it2 - 1;
        if(*it3 == x) cout << it3 - a << endl;
        else cout << -1 << endl;
    } 
    //5
    if(*it1 == x) cout << it3 - it1 + 1; 
    else cout << 0;
    return 0;
}