//  Cứ 3 vỏ chai bia sẽ được đổi một chai bia mới. Biết rằng ở 28techland, mỗi chai bia có giá 28 xu, nhiệm vụ của bạn là xác định với N xu cho trước, bạn có thể mua được tối đa bao nhiêu chai bia tính cả việc đổi thưởng bằng vỏ chai?

#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
   int n; cin >> n;
   int chaibia = n / 28;
   int vobia = chaibia;
   int sum = chaibia;
   while (vobia >= 3){
    chaibia = vobia / 3;
    vobia = vobia % 3 + chaibia;
    sum += chaibia;
   }
   cout << sum;
   return 0;
}

