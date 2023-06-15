#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(string a, string b){
    if(a.size() != b.size())
        return a.size() > b.size();
    else 
        return a > b;
}

int main(){
    string s; cin >> s;
    for(char &x : s) {
        if(isalpha(x)){
            x = ' ';
        }
    }
    stringstream ss(s);
    vector<string> v;
    string tmp;
    while(ss >> tmp){
        //loai bo so 0 o dau
        while(tmp.size() > 1 && tmp[0] == '0'){
            tmp.erase(0, 1);
        }
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0] << endl;
    return 0;
}

// Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy tìm số lớn nhất xuất hiện trong xâu. Ví dụ S = "abc123bba567ajsj50kkf099" thì số lớn nhất xuất hiện trong xâu là số 567, chú ý trong trường hợp một số có các số 0 đứng trước thì ta loại bỏ các số 0 ở đầu, trong ví dụ số 099 ta tính là số 99, 000 ta tính là số 0.

// Input Format

// Một dòng duy nhất chứa xâu S.

// Constraints

// 1≤len(S)≤100000;

// Output Format

// In ra số lớn nhất xuất hiện trong xâu, dữ liệu đảm bảo có ít nhất 1 số xuất hiện trong xâu.

// Sample Input 0

// abc123bba567ajsj50kkf099
// Sample Output 0

// 567