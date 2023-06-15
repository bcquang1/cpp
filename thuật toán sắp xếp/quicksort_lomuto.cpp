#include <bits/stdc++.h>
#define ll long long

using namespace std;

int partition(int a[], int l, int r){
    int i = l - 1, pivot = a[r];
    for(int j = l; j < r; j++){
        if(a[j] <= pivot){
            i++;
            swap(a[j], a[i]);
        }
    }
    i++;
    swap(a[i], a[r]);
    return i;
}

void quicksort(int a[], int l, int r){
    if(l < r){
        int pos = partition(a, l, r);
        quicksort(a, l, pos - 1);
        quicksort(a, pos + 1, r);
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    quicksort(a, 0, n - 1);
    for(int x : a) cout << x << " ";
    return 0;
}