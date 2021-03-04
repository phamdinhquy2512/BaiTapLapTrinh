#include <iostream>
#include <string>
using namespace std;
//ham kiem tra so doi guong
bool kiemtra(int number)
{
	int chuso;
	int sodao=0;
	int n=number;
	do
     {
         chuso=number%10;
         sodao=(sodao*10)+chuso;
         number=number/10;
     } while (number!=0);

	if(n==sodao){
		return true;
	}else{
	return false;
	}
}

int main()
{
	int T,A,B,dem=0;
		cout << "Nhap T: ";
		cin >> T;
	for(int i=1;i<=T;i++){
		cout << "Nhap A: ";
		cin >> A;
		cout << "Nhap B: ";
		cin >> B;
		for(int j=A;j<=B;j++){
			if(kiemtra(j)==true){
				dem++;
			}
		}
		cout << "So cac so doi guong la: " << dem <<endl;
	}

}
