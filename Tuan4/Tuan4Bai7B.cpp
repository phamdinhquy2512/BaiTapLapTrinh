#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    cout << "Nhap chu cai: ";
	char s[25];
	cin >> s;
	cout << "Output: ";
	for (int i=0; i<strlen(s); i++){
		for (int j=0; j < strlen(s); j++){
			cout << s[i] << s[j] << " ";
			for (int k=0; k< strlen(s); k++){
				cout << s[i] << s[j] << s[k] << " ";
			}
		}
	}
}
