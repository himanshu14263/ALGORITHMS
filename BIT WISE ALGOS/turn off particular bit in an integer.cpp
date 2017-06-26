// PROBLEM :: TURN OFF PARTICULAR BIT OF INTEGER.

#include <bits/stdc++.h>
using namespace std;
int turnOffk(int n,int k)
{
	if(k<=0)
		return n;

	return (n & (~(1<<(k-1))));
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

	cout<<n<<"--->";binaryC(n);cout<<endl;
	int k;
	cout<<"Enter the bit to turn off\n";
	cin>>k;

	int x = turnOffk(n,k);
	cout<<x<<"--->";binaryC(x);cout<<endl;
}
