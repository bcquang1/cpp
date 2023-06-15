#include<bits/stdc++.h>

using namespace std;

class tap_hop{
    int so_luong;
    int *a;
    
public:
    void nhap(int n){
        so_luong = n;
        a = new int[n];
        for(int i=0; i<n; i++) cin >> a[i];
    }
    
    int getNum(int i){
        return a[i];
    }
};

int main(){
    int n, m; cin >> n >> m;
    tap_hop A, B;
    A.nhap(n); B.nhap(m);
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[A.getNum(i)] = 1;
    }
    for(int i=0; i<m; i++){
        if(mp[B.getNum(i)]) mp[B.getNum(i)] = 2;
    }
    for(auto it : mp){
        if(it.second == 2) cout << it.first << ' ';
    }
    return 0;
}

// Trong lý thuyết tập hợp, một tập hợp chỉ được phép chứa các giá trị phân biệt và luôn luôn lưu các giá trị theo thứ tự tăng dần. Khai báo lớp IntSet và viết các phương thức để thực hiện các thao tác trên tập hợp số nguyên. Sử dụng lớp IntSet để in ra tập hợp các số nguyên là giao của hai tập số trong 2 dãy ban đầu. Sử dụng hàm main có nội dung như sau :

// image

// Input Format

// Dòng đầu ghi 2 số n và m (1 < n,m <100). Dòng thứ 2 ghi n số của a[]. Dòng thứ 3 ghi m số của b[]. Các số đều dương và nhỏ hơn 1000.

// Constraints

// N/A

// Output Format

// Ghi ra hợp của hai tập theo thứ tự tăng dần.

// Sample Input 0

// 14 5
// 92 36 73 11 78 19 57 76 96 58 36 38 29 42 
// 19 21 15 4 78 
// Sample Output 0

// 19 78 