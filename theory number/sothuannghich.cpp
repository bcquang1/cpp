#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau. Viết chương trình in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên cho trước

// Input Format

// 2 số a, b

// Constraints

// 1≤a≤b≤10^7

// Output Format

// In ra các số đẹp trong đoạn a, b. Trong trường hợp không tồn tại số đẹp nào thì in ra -1.

int daonguoc(int n){
    int s = 0;
    while(n){
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s;
}

int tn(int n){
    return n == daonguoc(n);
}

int demthuaso(int n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            if(cnt >= 3) return 1;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n != 1) cnt++;
    if(cnt >= 3) return 1;
    return 0;
}

int main(){
    int a ,b; cin >> a >> b;
    bool flag = true;
    for(int i = a; i <= b; i++){
        if(tn(i) && demthuaso(i)){
            cout << i << " ";
            flag = false;
        }
    }
    if(flag == true) cout << -1;
    return 0;
}