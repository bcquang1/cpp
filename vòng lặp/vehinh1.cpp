#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= n + 1 - i; j ++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n ; j++){
            if(j <= n-i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n; j++){
            if(j < i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(i == j || j == 1 || i == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}

