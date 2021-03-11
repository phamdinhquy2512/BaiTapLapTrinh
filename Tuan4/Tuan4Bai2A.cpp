#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int n;
    cout << "Nhap N: ";
    cin >> n;
    srand(time(0));
    int a[n];
    for(int i=0;i<n;i++){
        a[i] = rand() % (100-0+1)-0;
    }
    int x,dem=0;
    cout << "Nhap so can tim: ";
    cin >> x;
    for(int i=0;i<n;i++){
        if(x==a[i]) dem++;
    }
    if(dem==0){
        cout << "So can tim khong co trong day" << endl;
    }else{
        cout << "So can tim co trong day" << endl;
    }
    cout << "Day la: ";
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
        }
}
