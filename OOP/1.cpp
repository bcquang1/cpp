#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class PhanSo{
private:
    ll tu, mau;
public:
    void nhap(){
        cin >> this->tu >> this->mau;
    }

    void rutgon(){
        ll ucln = __gcd(this->tu, this->mau);
        this->tu /= ucln;
        this->mau /= ucln;
    }

    void in(){
        cout << this->tu << '/' << this->mau << endl;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    PhanSo x;
    x.nhap();
    x.rutgon();
    x.in();
}

// Viết chương trình khai báo lớp Phân số gồm hai thuộc tính private là tử số và mẫu số. Sau đó thực hiện nhập vào một phân số và in ra phân số đó ở dạng tối giản.

// Input Format

// Có hai số nguyên dương lần lượt là tử số và mẫu số.

// Constraints

// Các giá trị đều nguyên dương và không quá 18 chữ số.

// Output Format

// Ghi ra phân số tối giản;

// Sample Input 0

// 334 37
// Sample Output 0

// 334/37
// Sample Input 1

// 312 945
// Sample Output 1

// 104/315