// Gần đây Anton tìm thấy một hộp có chữ số trong phòng của mình. Có k2 chữ số 2, k3 chữ số 3, k5 chữ số 5 và k6 chữ số 6. Số nguyên yêu thích của Anton là 32 và 256. Anh quyết định soạn số nguyên này từ các chữ số anh có. Anh ta muốn làm cho tổng của các số nguyên này càng lớn càng tốt. Giúp anh ta giải quyết nhiệm vụ này! Mỗi chữ số có thể được sử dụng không quá một lần, tức là các số nguyên tổng hợp nên chứa không quá k2 chữ số 2, k3 chữ số 3, v.v. Tất nhiên, các chữ số không sử dụng không được tính vào tổng.

#include <iomanip>
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    int k2 , k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int min = k2;
    if(k5 < k6){
        if(k2 > k5){
            min = k5;
        }
    }
    else {
        if(k2 > k6){
            min = k6;
        }
    }
    long long tong = 1ll * min * 256;
    k2 -= min;
    k5 -= min;
    k6 -= min;
    if(k2 != 0 && k3 != 0){
        if(k2 > k3){
            tong += 1ll * k3 * 32;
        }
        else {
            tong += 1ll * k2 * 32;
        }
    }
    cout << tong << endl;
    return 0;
}
