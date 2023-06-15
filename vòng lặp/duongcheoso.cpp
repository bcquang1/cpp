#include <iomanip>
#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) cout << i << " ";
            else if(j == n - i + 1) cout << i << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
