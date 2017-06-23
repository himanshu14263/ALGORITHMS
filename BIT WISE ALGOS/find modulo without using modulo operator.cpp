// PROBLEM :: PERFORM MODULO OPERATION WITHOUT USING MODULO OPERATOR ( modulo will be done only with numbers of 2^n)

#include<bits/stdc++.h>
using namespace std;

int modulo(int n, int x)
{
	return (n & (x-1));
}
int main()
{
	int n,x;
	cout<<"Enter the number \n";
	cin>>n;
	cout<<"enter the number with which you want to do modulo\n";
	cin>>x;

	cout<<modulo(n,x)<<"\n";

	cout<<"result checking using % :: "<<n%x;
}
