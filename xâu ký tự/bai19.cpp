#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string tmp;
    set<string> se;
    while(ss >> tmp){
        se.insert(tmp);
    }
    cout << se.size() << endl;
    return 0;
}

// Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện đếm số lượng các từ khác nhau trong xâu mà không phân biệt hoa thường, ví dụ "28TecH" được coi là giống với từ "28teCH". (Bài này các bạn có thể thử code 2 vòng for lồng nhau hoặc sử dụng sort)

// Input Format

// Dòng duy nhất chứa xâu S

// Constraints

// 1<=len(S)<=10000; S chứa kí tự là chữ cái, chữ số và dấu cách.

// Output Format

// In ra số lượng từ khác nhau trong xâu

// Sample Input 0

// 28tech 28TECH 28tECH dev
// Sample Output 0

// 2