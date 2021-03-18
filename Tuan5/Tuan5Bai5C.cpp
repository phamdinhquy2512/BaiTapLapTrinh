#include<iostream>
#include<math.h>
using namespace std;
int kiemtra(int n ){
    if(n<2){
        return 0;
    }else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
                return 1;
        }
    }
}
int main(){
    int n;
    cout << "Nhap n= ";
    cin >> n;
    cout << kiemtra(n);
    return 0;
}
