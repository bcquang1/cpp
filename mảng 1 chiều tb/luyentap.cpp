#include <bits/stdc++.h>
#define ll long long

using namespace std;

int nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

void y1(int a[], int n){
    int max = -1e9-1, index;
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
            index = i;
        }
    }
    cout << max << " " << index << endl;
}

void y2(int a[], int n){
    int min = 1e9+1, index;
    for(int i = 0; i < n; i++){
        if(a[i] <= min){
            min = a[i];
            index = i;
        }
    }
    cout << min << " " << index << endl;
}

void y3(int a[], int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(nt(a[i])) cnt++;
    }
    cout << cnt << endl;
}



int main(){
    
    return 0;
}