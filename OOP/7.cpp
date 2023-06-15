#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class point{
private:
    double x1, x2, y1, y2;
public:
    friend istream& operator >> (istream& in, point &x){
        in >> x.x1 >> x.y1 >> x.x2 >> x.y2;
        return in;
    }
    friend ostream& operator << (ostream& out, point x){
        out << fixed << setprecision(4) << sqrt(pow(x.x2 - x.x1, 2) + pow(x.y2 - x.y1, 2)) << endl;
        return out;
    }
};

int main(){
    int t; cin >> t;
    while(t--){
        point x;
        cin >> x;
        cout << x;
    }
}

// Xây dựng lớp Point theo thiết kế dưới đây.

// imageViết chương trình nhập vào 2 điểm trong hệ tọa độ Oxy và tính khoảng cách giữa chúng.

// Input Format

// Dòng đầu ghi số bộ test T. Mỗi bộ test có 4 số thực lần lượt x1, y1, x2, y2;

// Constraints

// 1<=T<=100; -10^6<=x1,y1,x2,x2<=10^6

// Output Format

// Với mỗi bộ test, viết ra khoảng cách giữa 2 điểm với 4 chữ số phần thập phân.

// Sample Input 0

// 1
// 2 10 2 5
// Sample Output 0

// 5.0000