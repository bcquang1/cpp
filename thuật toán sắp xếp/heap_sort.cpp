#include <bits/stdc++.h>
#define ll long long

using namespace std;

void heapify(int a[], int n, int i){
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if(l < n && a[l] > a[largest]){
        largest = l;
    }
    if(r < n && a[r] > a[largest]){
        largest = r;
    }
    if(largest != i){
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
    cout << "largest:" << largest << " l:" << l << " r:" << r << endl;
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

void heap_sort(int a[], int n){
    for(int i = n / 2 - 1; i >= 0; i--){
        heapify(a, n, i);
    }
    // for(int i = 0; i < n; i++) cout << a[i] << " ";
    // cout << endl << "------" << endl;
    for(int i = n - 1; i >= 0; i--){
        swap(a[i], a[0]);
        heapify(a, i, 0);
    }
    // for(int i = 0; i < n; i++) cout << a[i] << " ";
    // cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    heap_sort(a, n);
    cout << "cuoi cung: ";
    for(int x : a) cout << x << " ";
    return 0;
}