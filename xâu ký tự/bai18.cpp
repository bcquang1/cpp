#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(string a, string b){
    if(a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main(){
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    for(string x : v){
        cout << x << " ";
    }
    return 0;
}

// Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện sắp xếp các từ trong xâu theo thứ tự chiều dài tăng dần, nếu 2 từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ được xếp trước.

// Input Format

// Dòng duy nhất chứa xâu S

// Constraints

// 1<=len(S)<=10000; S chứa kí tự là chữ cái, chữ số và dấu cách.

// Output Format

// In ra các từ sau khi sắp xếp

// Sample Input 0

// 28tech dev c 
// Sample Output 0

// c dev 28tech