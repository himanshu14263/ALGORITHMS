// PROBLEM :: CHECK IF GIVEN NUMBER IS POWER OF 2

#include<bits/stdc++.h>
using namespace std;

// METHOD 1 :: if a number is power of 2 then it has only one set bit.
int isPowerOf2(int x)
{
	return (x && (!(x & (x-1))));
}


// METHOD 2 :: if a number is power of 2 then (n-1) has all set bits.
int isPowerofTwo(int x)
{
	return (x && (!(x & (x-1))));
}
int main()
{
	int n;
	cout<<"enter the value of n";
	cin>>n;

	if(isPowerOf2(n))
		cout<<"given number is power of 2\n";
	else
		cout<<"it isn't power of 2\n";
}
