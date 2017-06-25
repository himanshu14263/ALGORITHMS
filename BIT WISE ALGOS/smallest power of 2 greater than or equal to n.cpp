// PROBLEM :: SMALLEST POWER OF 2 GREATER OR EQUAL TO N

#include <bits/stdc++.h>
using namespace std;

// method 1 :: using log
int powerOfTwo1(int n)
{
	int p = ceil(log2(n));
	return pow(2,p);
}

// method 2 :: using shift opertors
int powerOfTwo2(int n)
{
	int count =0;
	while(n)
	{
		count++;
		n>>=1;
	}
	return (1<<count);
}
int main()
{
	int n;
	cout<<"enter the number \n";
	cin>>n;

	cout<<powerOfTwo1(n);
	cout<<endl;
	cout<<powerOfTwo2(n);
}
