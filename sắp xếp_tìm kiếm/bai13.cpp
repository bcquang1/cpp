#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n, greater<int>());
    int ans = 1, docung = a[0];
    for(int i = 1; i < n; i++){
        if(docung <= 0)
            break;
        ++ans;
        docung = min(docung-1, a[i]);
    }
    cout << ans << endl;
    return 0;
}

// Nam có n viên gạch được đánh số từ 1 đến n. Các viên gạch có độ cứng lần lượt là a1, a2,..., an. Một viên gạch có độ cứng x nghĩa là Nam có thể chồng lên trên viên gạch đó tối đa x viên gạch khác, nếu chồng nhiều hơn thì viên gạch đó bị vỡ. Hỏi Nam có thể sắp được chồng gạch cao nhất là bao nhiêu?

// Input Format

// Dòng đầu tiên là số nguyên n - là số viên gạch.
// Dòng tiếp theo gồm n số nguyên a1, a2,..., an mỗi số cách nhau một khoảng trắng.
// Constraints

// 1<=n<=10^5; 0≤ai≤ 10^6

// Output Format

// Số nguyên xác định chiều cao cao nhất của chồng gạch mà Nam sắp được.

// Sample Input 0

// 4
// 1 2 3 4
// Sample Output 0

// 4