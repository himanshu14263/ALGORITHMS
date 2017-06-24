// PROBLEM :: COMPUTE THE MODULO DIVISION BY A POWER OF 2

#include<bits/stdc++.h>
using namespace std;

int findModulo(int x,int d)
{
	return (x&(d-1));
}
int main()
{
	int x,d;
	cout<<"enter the value of x";
	cin>>x;
	cout<<"enter the value of d";
	cin>>d;

	cout<<findModulo(x,d)<<"\n";
}
