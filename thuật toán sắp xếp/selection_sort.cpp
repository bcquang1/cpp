#include <bits/stdc++.h>
#define ll long long

using namespace std;

// sắp xếp chọn:
// B1: tìm phần tử nhỏ nhất trong mảng.
// B2: đưa phần tử nhỏ nhất đó về đầu mảng.
// B3: lặp lại bước 1,2 cho đến khi mảng đã được sắp xếp.
// B4: dừng.


void selectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_pos = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
        int tmp = a[i];
        a[i] = a[min_pos];
        a[min_pos] = tmp;
    }
}

void selection_sort2(int *l, int *r){
    for(int *i = l; i < r; i++){
        int *min_pos = i;
        for(int *j = i + 1; j < r; j++){
            if(*j < *min_pos){
                min_pos = j;
            }
        }
        int tmp = *i;
        *i = *min_pos;
        *min_pos = tmp;
    }
}

int main(){
    int n; cin >> n; 
    int a[n];
    for(int &x : a) cin >> x;
    selectionSort(a ,n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}