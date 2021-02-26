#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1,y1,x2,y2,d;
    cout << "Nhap toa do x1: "; cin >>x1;
    cout << "Nhap toa do y1: "; cin >>y1;
    cout << "Nhap toa do x2: "; cin >>x2;
    cout << "Nhap toa do y2: "; cin >>y2;
    d= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout << d;


}
