#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x,y,kc;
    cout << "Nhap toa do x: ";
    cin >> x;
    cout << "Nhap toa do y: ";
    cin >> y;
    kc = sqrt(x*x+y*y);
    cout << "Khoach cach la: "<< kc;
}
