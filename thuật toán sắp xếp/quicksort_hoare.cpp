#include <bits/stdc++.h>
#define ll long long

using namespace std;

int partition(int a[], int l, int r) {
    int pivot = a[l];
    int i = l - 1, j = r + 1;
    while(1){
        do {
            i++;
        }while(a[i] < pivot);
        do {
            j--;
        } while(a[j] > pivot);
        if(i < j) swap(a[i], a[j]);
        else return j;
    } 
}

void quick_sort(int a[], int l, int r){
    if(l >= r) return;
    int pos = partition(a, l, r);
    quick_sort(a, l, pos);
    quick_sort(a, pos+1, r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    quick_sort(a, 0, n-1);
    for(int x : a) cout << x << " ";

    return 0;
}