#include <bits/stdc++.h>
#define ll long long

using namespace std;

void chuanhoa(string &s){
    for(char &x : s) x = tolower(x);
    s[0] = toupper(s[0]);
}

int main(){
    vector<string> v;
    string tmp;
    while(cin >> tmp){
        v.push_back(tmp);
    }
    int n = v.size();
    transform(v[n-1].begin(), v[n-1].end(), v[n-1].begin(), ::toupper);
    for(int i = 0; i < n - 1; i++){
        chuanhoa(v[i]);
        cout << v[i];
        if(i != n - 2) cout << " ";
        else cout << ", ";
    }
    cout << v[n-1] << endl;
    cout << v[n-1] << ", ";
    for(int i = 0; i < n - 1; i++){
        cout << v[i];
        if(i != n - 2) cout << " "; 
    }
    return 0;
}

// Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người theo 2 mẫu được yêu cầu trước. Xem output để rõ hơn về cách chuẩn hóa.

// Input Format

// Dòng duy nhất là tên người.

// Constraints

// Xâu kí tự tên người có không quá 1000 kí tự;

// Output Format

// Dòng đầu tiên in ra theo mẫu chuẩn hóa 1. Dòng thứ 2 in ra theo mẫu chuẩn hóa 2.

// Sample Input 0

// hoang   dINH  NaM
// Sample Output 0

// Hoang Dinh, NAM
// NAM, Hoang Dinh