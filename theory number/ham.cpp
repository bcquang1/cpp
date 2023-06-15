#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
bool ham1(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
 
int ham2(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
int ham3(int n){
    int sum = 0;
    while(n != 0){
        if(n % 10 % 2 == 0){
            sum += n % 10;
        }
        n /= 10;
    }
    return sum;
}
 
int ham4(int n){
    int sum = 0;
    while(n != 0){
        int r = n % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7)
            sum += r;
        n /= 10;
    }
    return sum;
}
 
int ham5(int n){
    int rev = 0;
    while(n){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
 
int ham6(int n){
    int dem = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            ++dem;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1)
        ++dem;
    return dem;
}
 
int ham7(int n){
    int ans;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            ans = i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1)
        ans = n;
    return ans;
}
 
int ham8(int n){
    while(n){
        if(n % 10 == 6)
            return true;
        n /= 10;
    }
    return false;
}
 
int ham9(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    if(sum % 8 == 0) return true;
    else return false;
}
 
int gt(int n){
    int res = 1;
    for(int i = 1; i <= n; i++)
        res *= i;
    return res;
}
 
int ham10(int n){
    int sum = 0;
    while(n){
        sum += gt(n % 10);
        n /= 10;
    }
    return sum;
}
 
bool ham11(int n){
    int r = n % 10;
    while(n){
        if(n % 10 != r)
            return false;
        n /= 10;
    }
    return true;
}
 
bool ham12(int n){
    int r = n % 10;
    while(n){
        if(n % 10 > r)
            return false;
        n /= 10;
    }
    return true;
}
 
int count(int n){
    int dem = 0;
    while(n){
        ++dem;
        n /= 10;
    }
    return dem;
}
 
 
int ham13(int n){
    int sum = 0;
    int d = count(n);
    while(n){
        sum += pow(n % 10, d);
        n /= 10;
    }
    return sum;
}
 
 
int main(){
    int n; cin >> n;
    cout << ham1(n) << endl;
    cout << ham2(n) << endl;
    cout << ham3(n) << endl;
    cout << ham4(n) << endl;
    cout << ham5(n) << endl;
    cout << ham6(n) << endl;
    cout << ham7(n) << endl;
    cout << ham8(n) << endl;
    cout << ham9(n) << endl;
    cout << ham10(n) << endl;
    cout << ham11(n) << endl;
    cout << ham12(n) << endl;
    cout << ham13(n) << endl;
 
}