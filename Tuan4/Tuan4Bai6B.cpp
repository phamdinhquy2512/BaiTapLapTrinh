#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so phan tu N: ";
    cin >> n;
    int a[n];
    cout << "Nhap chuoi so nguyen N phan tu: " << endl;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<i;j++){
            for(int k=2;k<j;k++){
                if(a[i]+a[j]+a[k]==0){
                    cout << a[i] << " "<<a[j]<<" "<<a[k];
                    return 0;
                }
            }
        }
    }
}
