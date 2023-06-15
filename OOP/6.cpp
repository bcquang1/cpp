#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class Rectange{
private:
    double width, height;
    static string color;
public:
    Rectange(){

    }
    Rectange(double width, double height, string color){
        this->width = width;
        this->height = height;
        this->color = color;
    }

    double getWidth(){
        return width;
    }
    void setWidth(double width){
        this->width = width;
    }

    double getHeight(){
        return height;
    }
    void setHeight(double height){
        this->height = height;
    }
    string getColor(){
        return color;
    }
    void setColor(string color){
        this->color = color;
    }
    double findArea(){
        return width * height;
    }
    double findPerimeter(){
        return 2 * (width + height);
    }
};

string Rectange::color = "";

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Rectange x;
    string color;
    int a, b; cin >> a >> b >> color;
    if(a <= 0 || b <= 0){
        cout << "INVALID\n";
    }
    else{
        x.setWidth(a); x.setHeight(b); x.setColor(color);
        cout << fixed << setprecision(0) << x.findPerimeter() << ' ' << fixed << setprecision(0) << x.findArea() << ' ' << x.getColor() << endl;
    }
}

// Viết chương trình khai báo lớp Rectange với các thuộc tính và phương thức như sau:imageViết chương trình nhập vào giá trị độ dài hai cạnh của hình chữ nhật và màu sắc. In ra thông tin về chu vi, diện tích và màu sắc (đã đưa về dạng chuẩn trong đó ký tự đầu viết hoa, các ký tự sau viết thường) của hình chữ nhật đó.

// Input Format

// Gồm 2 số nguyên a, b là độ dài 2 cạnh hình chữ nhật và một xâu ký tự (không có khoảng trống) mô tả màu sắc.

// Constraints

// -1000<=a,b<=1000;

// Output Format

// Nếu hình chữ nhật là hợp lệ (các cạnh đều nguyên dương) thì in ra 3 thông tin: chu vi, diện tích, màu sắc, mỗi thông tin cách nhau một khoảng trống. Nếu dữ liệu không hợp lệ in ra INVALID

// Sample Input 0

// 22 25 Gray
// Sample Output 0

// 94 550 Gray