#include <iostream>
using namespace std;
int UCLN(int a, int b){
    while (a*b != 0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
        return a+b;
}
int main()
{
	int a,b;
	cout << "Nhap a,b: ";
	cin >> a >> b;
	cout << "UCLN la: " << UCLN(a,b) << endl;
	if (UCLN(a,b)==1){
        cout << "a va b la 2 so nguyen to cung nhau ";
	}else{
	    cout << "a va b khong nguyen to cung nhau ";
	}
	return 0;
}
