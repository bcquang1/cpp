#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

#define ll long long

using namespace std;

int main(){
   int n; cin >> n;
   int dem = 1;
   for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        cout << dem << " ";
        dem++;
    }
    cout << endl;
   }
   cout << endl;
   for(int i = 1; i <= n; i++){
    int khoitao = i;
    for(int j = 1; j <= n; j++){
        cout << khoitao << " ";
        khoitao++;
    }
    cout << endl;
   }
   cout << endl;
   for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        if(j <= n-i) cout << "~";
        else cout << i;
    }
    cout << endl;
   }
   cout << endl;
   for(int i = 1; i <= n; i++){
    int ktao = i;
    int kc = n - 1;
    for(int j = 1; j <= i; j++){
       cout << ktao << " ";
       ktao += kc;
       --kc;
    }
    cout << endl;
   }
   return 0;
}


