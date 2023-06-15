#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(string a, string b){
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}

int main(){
    string s; cin >> s;
    for(char &x : s){
        if(isalpha(x)){
            x = ' ';
        }
    }
    stringstream ss(s);
    vector<string> v;
    string tmp;
    while(ss >> tmp){
        while(tmp.size() > 1 && tmp[0] == '0'){
            tmp.erase(0,1);
        }
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(),cmp);
    for(string x : v) cout << x;
    return 0;
}

// Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy thực hiện tách các số xuất hiện trong xâu ra và ghép lại với nhau để tạo thành một số tự nhiên lớn nhất.Ví dụ với xâu S = "123abcda234kkf11" thì ta sẽ tách được các số 123, 234 và 11, trong trường hợp các số bắt đầu bằng chữ số 0 thì ta loại bỏ các số 0 vô nghĩa này. Sau đó ghép lại với nhau thành số 23412311 là số lớn nhất có thể đạt được.

// Input Format

// Một dòng duy nhất chứa xâu S.

// Constraints

// 1≤len(S)≤100000;

// Output Format

// In ra số lớn nhất ghép được.

// Sample Input 0

// 123abcda234kkf11
// Sample Output 0

// 23412311