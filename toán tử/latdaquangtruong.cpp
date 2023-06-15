// Quảng trường Nhà hát ở thủ đô Berland có hình chữ nhật với kích thước n × m mét. Nhân dịp kỷ niệm thành phố, một quyết định đã được đưa ra để lát Quảng trường bằng những viên bằng đá granit vuông. Mỗi viên đá hình vuông có kích thước a × a. Số lượng viên đá ít nhất cần thiết để lát Quảng trường là bao nhiêu? Nó được phép che phủ bề mặt lớn hơn Quảng trường Nhà hát. Nó không được phép phá vỡ các viên đá. Các cạnh của viên đá phải song song với các cạnh của Quảng trường.

#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int n ,m ,a; cin >> n >> m >> a;
    int x ,y;
    if(n % a == 0) x = n/a;
    else x = n/a + 1;
    if(m % a == 0) y = m/a;
    else y = m/a + 1;
    cout << 1ll*x*y << endl;
}

