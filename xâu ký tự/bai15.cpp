#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho xâu kí tự S, trong xâu S có nhiều từ được phân cách nhau bởi 1 hoặc 1 vài dấu cách. Nhiệm vụ của bạn là đối với những từ xuất hiện ở vị trí lẻ thì thì in ra từ đó, còn những từ xuất hiện ở vị trí chẵn thì trước khi in từ đó bạn phải lật ngược từ đó trước. Các từ khi in viết cách nhau đúng 1 dấu cách và sau từ cuối cùng ko có dấu cách thừa.

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    int dem = 0;
    while(ss >> tmp){
        dem++;
        if(dem % 2 != 0) v.push_back(tmp);
        else {
            reverse(tmp.begin(), tmp.end());
            v.push_back(tmp);
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
        if(i != v.size()-1) cout << " ";
    }
    return 0;
}