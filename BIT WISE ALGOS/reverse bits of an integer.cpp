// 	PROBLEM :: REVERSE BITS OF AN INTEGER

#include <bits/stdc++.h>
using namespace std;

int reverseBits(int x)
{
	int numberOfBits = (sizeof(x)*8);
	int reverseNumber = 0;
	for(int i=0;i<numberOfBits;i++)
	{
		int temp = (x & (1<<i));
		if(temp)
		{
			reverseNumber |= (1<<((numberOfBits-1)-i));
		}
	}
	return reverseNumber;
}

void binaryC(int x)
{
	stack<int>s;
	while(x)
	{
		s.push(x&(1));
		x>>=1;
	}
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
	cout<<"\n";
}
int main()
{
	int n;
	cout<<"enter the number to reverse\n";
	cin>>n;

	binaryC(n);

	int x = reverseBits(n);
	cout<<"the number formed by reversing the bits is :: ";
	cout<<x<<"\n";
	binaryC(x);
}
