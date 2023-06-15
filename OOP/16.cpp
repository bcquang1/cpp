#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

class intSet{
    private:
        int n, a[100];
    public:
        int solve(int n)
        {
            return this->n = n;
        }
        void in()
        {
            for(int i = 0; i < n; i++)cin >> a[i];
        }
        void out(intSet another)
        {
            set<int> se;
            for(int i = 0; i < n; i++)se.insert(a[i]);
            for(int i = 0; i < another.n; i++)se.insert(another.a[i]);
            for(int x : se)cout << x << ' ';
        }
};
int main(){
    quick();
    intSet a,b;
    int n,m;
    cin >> n >> m;
    a.solve(n);
    b.solve(m);
    a.in();
    b.in();
    a.out(b);
}
/*
Trong lý thuyết tập hợp, một tập hợp chỉ được phép chứa các giá trị phân biệt và luôn luôn lưu các giá trị theo thứ tự tăng dần. Khai báo lớp IntSet và viết các phương thức để thực hiện các thao tác trên tập hợp số nguyên. Sử dụng lớp IntSet để in ra tập hợp các số nguyên là hợp của hai tập số trong 2 dãy ban đầu. Yêu cầu sử dụng hàm main có nội dung như sau để chạy chương trình.

image

Input Format

Dòng đầu ghi 2 số n và m (1 < n,m <100). Dòng thứ 2 ghi n số của a[]. Dòng thứ 3 ghi m số của b[]. Các số đều dương và nhỏ hơn 1000;

Constraints

N/A

Output Format

Ghi ra hợp của hai tập theo thứ tự tăng dần.

Sample Input 0

12 5
89 16 18 57 93 25 40 25 75 71 30 18 
23 93 8 16 80 
Sample Output 0

8 16 18 23 25 30 40 57 71 75 80 89 93 
*/