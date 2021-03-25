#include <iostream>
#include <time.h>
using namespace std;

void mang(int n)
{
    int a[1000];
    mang(n-1);
}
int main(){
    int n;
    cin >> n;
    mang(n);
}

