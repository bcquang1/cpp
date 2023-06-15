#include <bits/stdc++.h>
using namespace std;
class point{
private:
    double x, y;
public:
    point(double x, double y){
        this->x = x;
        this->y = y;
    }
    point(point &p){
        this->x = p.x;
        this->y = p.y;
    }

    double Radii(point A, point B){
        double a = sqrt((this->x - A.x)*(this->x - A.x) + (this->y - A.y)*(this->y - A.y));
        double b = sqrt((this->x - B.x)*(this->x - B.x) + (this->y - B.y)*(this->y - B.y));
        double c = sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y));
        double p = (a+b+c)/2;
        if(a+b<=c || a+c<=b || b+c<=a) return -1;
        else {
            double S = sqrt(p*(p-a)*(p-b)*(p-c));
            return a*b*c/(4*S);
        }
    }
    
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t; cin>>t;
    while(t--){
        double x1, y1, x2, y2, x3, y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        point A(x1, y1), B(x2, y2), C(x3, y3);
        double r = A.Radii(B, C);
        if(r == -1) cout << "INVALID" <<endl;
        else cout << fixed << setprecision(3) << r * r * 3.14 << endl;
    }
    return 0;
}

// Xây dựng lớp Point. Nhập 3 điểm p1, p2, p3. Hãy tính diện tích hình tròn ngoại tiếp tam giác tạo bởi 3 điểm trên. Công thức tính bán kính hình tròn ngoại tiếp tam giác có 3 cạnh a, b, c là : R = (a* b * c)/(4 * S). Lấy PI = 3.14. Nếu kết quả bị sai vài test thì các bạn tạm thời bỏ qua.

// Input Format

// Dòng đầu là số lượng test case T; T dòng tiếp theo mỗi dòng 6 số thực lần lượt là tọa độ của 3 điểm A, B, C.

// Constraints

// 1<=T<=100; Giá trị tọa độ không quá 1000.

// Output Format

// Nếu 3 điểm không thể tạo thành tam giác, in ra INVALID; Nếu 3 điểm tạo thành tam giác, in ra diện tích hình tròn ngoại tiếp với độ chính xác 3 số phần thập phân.

// Sample Input 0

// 9
// -5 56 48 -9 637 528
// 4 24 36 77 276 364
// -49 5 21 -1 484 988
// 23 64 53 60 60 20
// -37 46 16 -60 800 742
// 1 90 0 38 928 924
// -94 57 39 -37 2 257
// 76 34 20 68 474 897
// -80 51 34 -49 473 672
// Sample Output 0

// 499955.915
// 6385832.242
// 1114241.629
// 2853.002
// 1041569.199
// 2422176.307
// 70903.104
// 710404.215
// 559392.388