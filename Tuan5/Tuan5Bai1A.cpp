#include<iostream>
using namespace std;
int main(){
    int a[10];
    char b[10];
    for(int i=0;i<3;i++){
        cout << "a at " << &a[i] << endl;
    }
    // moi bien cach nhau 4 byte
    for(int i=0;i<3;i++){
        cout << "b at " << (void*)&b[i] << endl;
    }
    //moi bien cach nhau 1 byte
    int x,y;
    cout << "x at" << &x << endl;
    cout << "y at" << &y << endl;
}

