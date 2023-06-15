#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau. 
// Ví dụ N=30 là số Sphenic vì 30 = 2×3×5; N = 60 không phải số Sphenic vì 60 = 2×2×3×5. 
// Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Sphenic hay không?

// Input Format

// Một số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// Đưa ra 1 hoặc 0 tương ứng với N là số Sphenic hoặc không.

int pt(ll n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            if(cnt > 3) return 0;
            int mu = 0;
            while(n % i == 0){
                n /= i;
                mu++;
            }
            if(mu > 1) return 0;
        }
    }
    if(n != 1) {
        cnt++;
    }
    if(cnt == 3) return 1;
    return 0;
}

int main(){
    ll n; cin >> n;
    cout << pt(n);
    return 0;
} 