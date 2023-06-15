// Một con ếch hiện đang ở điểm 0 trên trục tọa độ Ox. Nó nhảy theo thuật toán sau: bước nhảy thứ nhất là a đơn vị về bên phải, bước nhảy thứ hai là b đơn vị về bên trái, bước nhảy thứ ba là a đơn vị bên phải, bước nhảy thứ tư là b đơn vị bên trái, v.v. .Nếu con ếch đã nhảy một số lần chẵn (trước lần nhảy hiện tại), nó nhảy từ vị trí hiện tại x sang vị trí x + a, mặt khác, nó nhảy từ vị trí hiện tại x sang vị trí x − b. Nhiệm vụ của bạn là tính toán vị trí của ếch sau k bước nhảy

#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int a, b, k; cin >> a >> b >>k;
    int trai = 0, phai = 0;
    if(k % 2 == 0){
        trai = phai = k/2;
    }
    else{
        trai = k/2;
        phai = trai + 1;
    }
    cout << 1ll*phai*a - 1ll*trai*b << endl;
}

