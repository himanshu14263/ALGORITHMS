// PROBLEM :: ROTATE BITS

#include <bits/stdc++.h>
using namespace std;
void binaryC(int n)
{
	stack<int>s;
	while(n>0)
	{
		s.push(n%2);
		n>>=1;
	}
	while(s.empty()==false)
	{
		cout<<s.top();
		s.pop();
	}
	cout<<"\n";
}

int leftRotate(int x,int rBits)
{
	return (x<<rBits)|(x>>(sizeof(int)*8-rBits));
}

int  rightRotate(int x,int rBits)
{
	return (x >> rBits)|(x << (sizeof(int)*8-rBits));
}
int main()
{
	int x;
	int rBits;

	cout<<"enter the number\n";
	cin>>x;
	cout<<"Enter the bits to rotate\n";
	cin>>rBits;

	binaryC(x);

	int a = leftRotate(x,rBits);
	cout<<a<<"--->";
	binaryC(a);
	int b = rightRotate(x,rBits);
	cout<<b<<"--->";
	binaryC(b);
}
