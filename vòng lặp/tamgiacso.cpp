#include <iomanip>
#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
   int n; cin >> n;
   for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n - i; j++){
        cout << "  ";
    }
    int ktao = i;
    for(int j = 1; j <= 2 * i - 1; j++){
        if (j < i){

         cout << ktao << " "; ++ktao;
        }
        else {
            cout << ktao << " "; --ktao;
    }
    }
    cout << endl;
   }
    return 0;
}
