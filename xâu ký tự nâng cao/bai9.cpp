#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy đếm số lượng từ xuất hiện trong xâu S.
int main(){
    string s;
    int dem = 0;
    while(cin >> s){
        ++dem;
    }
    cout << dem << endl;
    return 0;
}