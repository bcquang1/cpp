#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class ps{
private:
    ll ts, ms;
public:
    friend istream& operator >> (istream &in, ps &x){
        in >> x.ts >> x.ms;
        return in;
    }
    friend ostream& operator << (ostream &out, ps x){
        ll mc = __gcd(x.ts, x.ms);
        x.ts /= mc;
        x.ms /= mc;
        out << x.ts << "/" << x.ms ;
        return out;
    }
    friend ps operator + (ps a, ps b){
        ps x;
        x.ts = a.ts * b.ms + b.ts * a.ms;
        x.ms = a.ms * b.ms;
        return x;
    }
    friend ps operator * (ps a, ps b){
        ps x;
        x.ts = a.ts * b.ts;
        x.ms = a.ms * b.ms;
        return x;
    }
};
int main(){
    int t; cin >> t;
    while(t--){
        ps a, b;
        cin >> a >> b;
        cout << (a + b) * (a + b) << ' ' << a * b * (a + b) * (a + b) << endl;
    }
}

// số ở dưới được gọi là mẫu số. Cho hai phân số A và B có tử số và mẫu số được nhập từ bàn phím. Viết chương trình thực hiện hai nhiệm vụ sau: 1. Thực hiện phép tính C = (A + B)^2 và rút gọn kết quả. 2. Thực hiện phép tính D = A x B x C và rút gọn kết quả.

// Input Format

// Dòng đầu tiên là số bộ test T; T dòng tiếp theo, mỗi dòng gồm 4 số lần lượt là tử và mẫu số của phân số A và phân số B

// Constraints

// (T <= 100); Các phân số có tử số và mẫu số là số nguyên trị tuyệt đối <= 100; Dữ liệu đảm bảo mẫu số khác 0.

// Output Format

// Ghi ra kết quả của hai phép tính theo định dạng phân số, cách nhau một khoảng trống.

// Sample Input 0

// 6
// 1 2 3 4
// 2 3 4 5
// -23 -36 99 90
// 24 -1 99 60
// -40 -9 98 91
// 37 -31 61 92
// Sample Output 0

// 25/16 75/128
// 484/225 3872/3375
// 97969/32400 24786157/11664000
// 199809/400 19781091/-1000
// 417316/13689 233696960/1601613
// 2289169/8133904 5166654433/-23197894208