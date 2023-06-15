#include <iomanip>
#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n ; i++){
        char c = 'A' + i - 1;
        for(int j = 1; j <= n; j++){
           if(i % 2 != 0) cout << (char)c;
           else cout << char(c+32);
           c++;
        }
        cout << endl;
    }
    return 0;
}
