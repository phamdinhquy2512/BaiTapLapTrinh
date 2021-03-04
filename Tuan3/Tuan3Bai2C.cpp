#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Nhap xau: ";
    getline(cin,s);
    int dem=0;
    for(int i=0;i<=s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1])
            dem++;
    }
    if(dem==0){
        cout << "La xau doi xung";
    }else{
    cout << "Khong la xau doi xung";
    }
}
