// Doremon muốn leo lên một cầu thang gồm n bước. Anh ta có thể leo 1 hoặc 2 bước mỗi lần di chuyển. Doremon muốn số lần di chuyển là bội số của một số nguyên m. Số lượng di chuyển tối thiểu làm cho anh ta leo lên đỉnh cầu thang thỏa mãn điều kiện của anh ta là gì?

#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int n ,m; cin >> n >> m;
    int toida = n ,toithieu = n/2;
    if(n % 2 == 0) toithieu = n / 2;
    else toithieu = n /2 + 1;
    int ans = (toithieu + m - 1) / m * m;
    if(ans <= toida){
        cout << ans << endl;
    }
    else {
        cout << -1 << endl;
    }
}

