#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x,y,UCLN;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	for(int i=1;i<=1000;i++){
		if((x%i==0)&&(y%i==0)){
			UCLN=i;
		}
	}
	cout << "Uoc chung lon nhat cua x va y la: " << UCLN;
}
