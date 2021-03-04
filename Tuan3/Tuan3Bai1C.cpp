#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap so tu nhien N= ";
    cin >> n;
    int a[n];
    cout << "Nhap mang gom N phan tu:" << endl;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
            dem++;
        }
        }
    }
    if(dem==0){
        cout << "No";
    }else{
    cout << "Yes";
    }
}
