#include <iostream>
using namespace std;

long F(int n)
{
 if (n == 0) return 0;
 if (n == 1) return 1;
 return F(n-1) + F(n-2);
}
int SumFibo(int n){
    if(n<=0)
        return 0;
    int fibo[n+1],i, sum=0;
    fibo[0]=0;
    fibo[1]=1;
    for(i=2;i<=n;i++){
        fibo[i] = fibo[i-1] + fibo [i-2];
    }
    for(int i=0; i<=n; i++){
        sum = sum + fibo[i];
    }
    return sum;
}
int main()
{
	int n;
	cin >> n;
	cout << F(n) << endl;
	cout << SumFibo(n);
}
//dùng vòng lặp tính nhanh hơn
