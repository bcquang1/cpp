#include <bits/stdc++.h>
#define ll long long

using namespace std;
// sắp xếp nổi bọt:
// B1: so sánh 2 phần tử liên tiếp nhau, nếu phần tử đứng trước lớn hơn phần tử đứng sau thì hoán đổi chỗ 2 phần tử đó.
// B2: lặp lại bước 1 cho đến khi không còn phần tử nào cần hoán đổi chỗ.
// B3: giảm số lượng phần tử cần so sánh đi 1 đơn vị.
// B4: lặp lại bước 1,2,3 cho đến khi số lượng phần tử cần so sánh bằng 1.
// B5: dừng.
void bubbleSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }   
}

void bubble2(int *l, int *r)
{
    for (int *i = l; i < r; i++)
        for (int *j = r; j > i; j--)
            if (*j < *(j - 1))
                swap(*j, *(j - 1));
}

template <class T>
void bubble3(T *l, T *r)
{
    for (T *i = l; i < r; i++)
        for (T *j = r; j > i; j--)
            if (*j < *(j - 1))
                swap(*j, *(j - 1));
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    bubbleSort(a, n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}