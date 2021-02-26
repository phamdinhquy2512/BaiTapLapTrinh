#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap nam: ";
    cin >> n;

    if (n % 4 == 0) {
        if (n % 100 == 0) {
            if (n % 400 == 0)
                cout << n << " la nam nhuan";
            else
                cout << n << " khong la nam nhuan";
        }
        else
            cout << n << " la nam nhuan";
    }
    else
        cout << n << " khong la nam nhuan";

    return 0;
}
