// PROBLEM :: SWAP TWO NIBBLES IN A BYTE.

#include <bits/stdc++.h>
using namespace std;


int swapNibbles(int n)
{
	return (((n & 0x0f)<<4) | ((n & 0xf0)>>4));
}

void binaryC(int n)
{
	if(n>1)
		binaryC(n/2);
	cout<<n%2;
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;
	cout<<n<<"--->";
	binaryC(n);
	cout<<endl;

	int x = swapNibbles(n);
	cout<<x;
	cout<<"--->";
	binaryC(x);
}
