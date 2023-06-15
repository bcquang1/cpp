#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int m, s; cin >> m >> s;
    if(s > 9 * m || (s == 0 && m > 1)){
        cout << "NOT FOUND" << endl;
    }
    else {
        int be[m], lon[m];
        int t = s;
        for(int i = 0; i < m; i++){
            if(s >= 9){
                lon[i] = 9;
                s-= 9;
            }
            else {
                lon[i] = s;
                s = 0;
            }
        }
        --t;// de danh 1 don vi
        for(int i = m - 1; i >= 1; i--){
            if(t >= 9){
                be[i] = 9; t -= 9;
            }
            else {
                be[i] = t; t = 0;
            }
        }
        be[0] = t + 1;
        for(int x : be) cout << x;
        cout << endl;
        for(int x : lon) cout << x;
    }
    return 0;
}

// Cho số tự nhiên m và số nguyên s không âm. Nhiệm vụ của bạn là tìm số bé nhất và lớn nhất có m chữ số và tổng chữ số bằng s.

// Input Format

// Một dòng gồm 2 số m và s

// Constraints

// 1 ≤ m ≤ 100; 0≤ s≤ 900

// Output Format

// In ra số bé nhất, lớn nhất có thể đạt được, mỗi số in ra trên 1 dòng. Nếu không có đáp án thì in ra 1 dòng "NOT FOUND".

// Sample Input 0

// 2 15
// Sample Output 0

// 69
// 96
// Sample Input 1

// 2 30
// Sample Output 1

// NOT FOUND