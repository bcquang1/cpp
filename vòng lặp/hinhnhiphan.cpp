#include <iomanip>
#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n ; i++){
        int cnt = 0;
        for(int j = 1; j <= n; j++){
           if(i%2!=0){
                if(j%2==0) cout<<"1";
                else cout<<"0";
            }
            if(i%2==0){
                if(j%2!=0) cout<<"1";
                else cout<<"0";
            }    

        }
        cout << endl;
    }
    return 0;
}
