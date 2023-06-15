#include <bits/stdc++.h>
#define ll long long

using namespace std;

// sắp xếp chèn:
// B1: xét a1 coi là 1 dãy đã sắp xếp có 1 phần tử.
// B2: xét a2, nếu a2 < a1 thì đưa a2 về đầu dãy, nếu a2 > a1 thì đưa a2 vào sau a1.
// B3: lặp lại bước 2 cho đến khi mảng đã được sắp xếp.
// B4: dừng.


void insertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int pos = i - 1, value = a[i];
        while(pos >= 0 && value < a[pos]){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = value;
    }
}

void insertion_sort2(int *l, int *r){
    for(int *i = l + 1; i < r; i++){
        int *pos = i - 1, value = *i;
        while(pos >= l && value < *pos){
            *(pos + 1) = *pos;
            pos--;
        }
        *(pos + 1) = value;
    }
}

int main(){
    int n; cin >> n;
    int a[n]; 
    for(int &x : a) cin >> x;
    insertionSort(a ,n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}