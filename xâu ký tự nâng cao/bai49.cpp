#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string s; cin >> s;
    string res = "";
    for(int i = 0; i < s.length(); i++){
        if(i < s.length()-2 && s.substr(i, 3) == "111"){
            i += 2;
        }
        else res += s[i];
    }
    if(res == "") cout << "EMPTY";
    else cout << res;
    return 0;
}

// Theo quan niệm của người Việt, số 7 là một số không may mắn, vì thế bạn được yêu cầu xóa cụm 111 trong xâu nhị phân ban đầu, cụm 111 chính là biểu diễn ở dạng nhị phân của số 7.

// Input Format

// Xâu nhị phân chỉ bao gồm số 0 và 1.

// Constraints

// Xâu có độ dài không quá 1000.

// Output Format

// In ra xâu sau khi xóa cụm 111, chú ý khi bạn xóa 1 cụm 111 khỏi xâu ban đầu, các kí tự ở bên trái và bên phải cụm 111 này lại trở thành các kí tự liền kề nhau. Nếu sau khi xóa xâu trở thành rỗng thì in ra "EMPTY";

// Sample Input 0

// 1000111
// Sample Output 0

// 1000
// Sample Input 1

// 111
// Sample Output 1

// EMPTY