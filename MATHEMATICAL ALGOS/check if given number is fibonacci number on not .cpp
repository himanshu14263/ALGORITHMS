// PROBLEM :: CHECK IF GIVEN NUMBER IS FIBONACCI NUMBER OR NOT.

#include <bits/stdc++.h>
using namespace std;

bool perfectSquare(int n)
{
	int x=sqrt(n);
	return ((x*x) == n);
}
bool checkFibo(int  n)
{
	return perfectSquare(5*n*n+4) || perfectSquare(5*n*n-4);
}
int main()
{
	int n;
	cout<<"enter the number\n";
	cin>>n;

	if(checkFibo(n))
		cout<<"yes it is fibo\n";
	else
		cout<<"no it isn't fibo\n";
}
