// PROBLEM :: FIND THE Nth CATALAN NUMBER

#include <bits/stdc++.h>
using namespace std;

int  nCk(int n,int k)
{
	if(n-k<k)
		k=n-k;

	int res=1;
	for(int i=0;i<k;i++)
	{
		res*=(n-i);
		res/=(i+1);
	}

	return res;
}
int findCatalan(int n)
{
	// catalan = 2nCn/(n+1)

	return (nCk(2*n,n))/(n+1);
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;

	cout<<findCatalan(n);
}
