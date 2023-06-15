#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Bạn được cung cấp một số nguyên x. Bạn có thể biểu diễn x bằng cách tổng của các số trong các số 11,111,1111,11111,… ( Các số mà bản thân nó chỉ chứa các chữ số 1)?(Bạn có thể sử dụng bất kỳ số nào trong số chúng bất kỳ số lần nào). Ví dụ, 33 = 11 + 11 + 11 144 = 111 + 11 + 11 + 11


int check(int n){
    for(int i = 0; i <= n/111; i++){
        int tmp = n - i*111;
        if(tmp % 11 == 0) return 1;
    }
    return 0;
}

int main(){
    int n; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
    return 0;
}
