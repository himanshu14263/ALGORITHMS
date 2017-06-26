// PROBLEM :: WRITE PROGRAM TO SWAP ODD AND EVEN BITS OF AN INTEGER

#include <bits/stdc++.h>
using namespace std;

void binaryC(int n)
{
	if(n>1)
		binaryC(n/2);
	cout<<(n%2);
}

int swapOddEven(int n)
{
	unsigned int odd = n & (0x55555555);
	unsigned int even = n & (0xAAAAAAAA);

	odd <<= 1;
	even >>=1;

	return odd | even ;
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;

	binaryC(n);
	cout<<endl;

	int x = swapOddEven(n);
	cout<<"the number after bits swapping is :: ";
	cout<<x<<"\n";
	binaryC(x);
}
