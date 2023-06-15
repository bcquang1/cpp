#include <bits/stdc++.h>
using namespace std;
class Point{
    private: double x, y;
    public: 
        Point(double x, double y){
            this->x = x;
            this->y = y;
        }
        Point(Point &p){
            this->x = p.x;
            this->y =p.y;
        }
        double getX(){
            return this->x;
        }
        double getY(){
            return this->y;
        }
        double distance(Point B){
            double D = (this->x - B.x)*(this->x - B.x) + (this->y - B.y)*(this->y - B.y);
            return sqrt(D);
        }
        double distance(Point B, Point C){
            double D = (C.x - B.x)*(C.x - B.x) + (C.y - B.y)*(C.y - B.y);
            return sqrt(D);
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t; cin>>t;
    while(t--){
        double x1, y1, x2, y2, x3, y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        Point A(x1, y1), B(x2, y2), C(x3, y3);
        double a = A.distance(B);
        double b = C.distance(B);
        double c = A.distance(C);
        if((a+b) <= c || (a+c) <= b || (b+c) <=a) cout <<"INVALID" <<endl;
        else {
            double p = (a+b+c)/2;
            cout<< fixed << setprecision(3) << 2*p <<" ";
            cout<< fixed << setprecision(3) << sqrt(p*(p-a)*(p-b)*(p-c)) <<endl;
        }
    }
    return 0;
}


// Sử dụng lớp Point được thiết kế như sau để tính chu vi và diện tích của tam giác.

// imageViết chương trình nhập 3 điểm a, b, c. Hãy tính chu vi và diện tích tam giác được tạo bởi 3 điểm đó.

// Input Format

// Dòng đầu ghi số bộ test T;
// T dòng tiếp theo mỗi dòng gồm 6 số (xA, yA, xB, yB, xC, yC) lần lượt là tọa độ của 3 điểm a, b, c.
// Constraints

// 1<=T<=100; 1000<=xA, yA, xB, yB, xC, yC<=10^6;

// Output Format

// Nếu 3 điểm không thể tạo thành tam giác thì in ra INVALID, ngược lại in ra chu vi và diện tích của tam giác lấy 3 số sau dấu phẩy.

// Sample Input 0

// 6
// -28 82 5 -32 211 950
// 91 30 16 50 464 367
// -12 37 92 -57 797 98
// 66 0 95 58 645 80
// -49 68 19 -76 404 817
// 35 40 91 82 336 412
// Sample Output 0

// 2022.357 27945.000
// 1129.122 16367.500
// 1673.320 41195.000
// 1199.786 15631.000
// 2007.040 58082.000
// 959.529 4095.000