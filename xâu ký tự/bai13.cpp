#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho một xâu S gồm nhiều từ, các từ được phân cách nhau bởi dấu cách hoặc các dấu '.', ',', '!', '?', hãy liệt kê các từ xuất hiện trong xâu, giữa các từ cách nhau một dấu cách, sau từ cuối cùng ko được in thừa dấu cách
// Sample Input 0

// oSAz ?oiiaz iSaSz SDA ,bbW oWA AIIia .
// Sample Output 0
// oSAz oiiaz iSaSz SDA bbW oWA AIIia

void xuli(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?'){
            s[i] = ' ';
        }
    }
}

int main(){
    string s;
    getline(cin, s);
    s = xuli(s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for(int i = 0; i < s.size(); i++){
        
    }

    return 0;
}