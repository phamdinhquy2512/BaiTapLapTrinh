#include <iostream>
using namespace std;
int factorial(int x)
{
    if (x == 1){
		return 1;
    }else{
        cout << "x = " << x <<" at " << &x << endl;
        return x * factorial(x - 1);
    }
}
int main()
{
    int x;
    cout << "nhap so nguyen n: ";
    cin >> x;
    cout << factorial(x);
    return 0;
}
