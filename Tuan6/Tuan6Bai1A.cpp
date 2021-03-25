#include <iostream>
using namespace std;

void arr(int arr[])
{
    cout << "Mang trong ham f" << endl;
    for(int i=0;i<5;i++)
    {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "Dia chi cua bien mang la: " << &arr<<endl;
    cout << "Dia chi cua phan tu thu 1 la "<<&arr[0] <<endl;

}

int main()
{
    cout << "Mang trong ham main: " <<endl;
    int a[5];
    for(int i=0;i<5;i++)
    {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> a[i];
    }
    cout << "Dia chi cua bien mang la: " << &a<<endl;
    cout << "Dia chi cua phan tu 1 la: " << &a[0]<<endl;

    arr(a);

    //dia chi cua 2 mang khac nhau
}
