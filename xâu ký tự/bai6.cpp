#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho số nguyên không âm N, hãy tiến hành sắp xếp các chữ số của N theo thứ tự tăng dần rồi in ra màn hình, trong trường hợp số sau khi sắp xếp xuất hiện các chữ số 0 ở đầu thì ra không in những chữ số 0 vô nghĩa này.

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << stoll(s); // stoll: string to long long
    return 0;
}