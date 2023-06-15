#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] >= 0) {
            int cnt = 1;
            for(int j = i + 1; j < n; j++){
                if(a[j] == a[i]){
                    a[j] = -1;
                    cnt++;
                }
            }
            cout << a[i] << " " << cnt << endl;
        }
    }
    return 0;
}