// Bạn được cung cấp một bảng hình chữ nhật có kích thước M × N hình vuông đơn vị. Ngoài ra, bạn được cung cấp một số lượng không giới hạn các mảnh domino tiêu chuẩn kích thước 2 × 1. Bạn được phép xoay các mảnh domino. Bạn được yêu cầu đặt càng nhiều domino càng tốt trên bảng để đáp ứng các điều kiện sau: 1. Mỗi domino hoàn toàn bao gồm hai hình vuông đơn vị. 2. Không có hai domino trùng nhau. 3. Mỗi domino nằm hoàn toàn bên trong bảng. Nó được phép chạm vào các cạnh của bảng. Tìm số lượng domino tối đa thỏa mãn điều kiện trên.

#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int n,m; cin >> n >> m;
    if(n % 2 == 0){
        cout << 1ll*n/2*m << endl;
    }
    else{
        cout << 1ll*(n/2)*m+m/2 << endl;
    }
}

