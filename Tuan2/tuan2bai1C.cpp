#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	if(n<2){
		cout << n <<" khong phai so nguyen to\n";
		return 0;
	}
	int dem=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			dem++;
		}
	}
	if(dem==1){
		cout << n <<" la so nguyen to\n";
	}else{
		cout << n <<" khong phai so nguyen to\n";
	}
	}
