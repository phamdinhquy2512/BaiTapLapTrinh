#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >>b;
    cout << "Nhap c: "; cin >>c;
    bool d=a>b&&b>c || a<b&&b<c;
    if(d){
        cout << "true";
    }else{
    cout << "false";
    }
}
