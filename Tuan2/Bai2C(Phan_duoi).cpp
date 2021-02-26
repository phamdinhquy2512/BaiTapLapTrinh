#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x;
	int y;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap so mu y: ";
	cin >> y;
	float luythua=1;
	for(int i=1;i<=y;i++){
		luythua=luythua*x;
	}
	cout << "Gia tri cua x mu y la: ";
	cout << luythua;

	//kiem tra bang ham pow
	cout << "\nkiem tra: ";
	cout << pow(x,y);

}
