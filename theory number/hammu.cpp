#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
    long long a ,b;
    cin >> a >> b;
    double c = (double)a / b;
    cout << a + b << endl << a - b << a * b << endl;
    try {
        cout << fixed << setprecision(4) << c;}
    catch{
        cout << "INVALID";}
    return 0;
}
