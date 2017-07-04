// PROBLEM :: MOST EFFICIENT WAY TO FIND BINOMIAL COEFFICIENT

#include <bits/stdc++.h>
using namespace std;

int findBC(int n,int r)
{
	if(r>n-r)
		r=n-r;

	int res=1;
	for(int i=0;i<r;i++)
	{
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}
int main()
{
	int n,r;
	cout<<"enter the value of n and r\n";
	cin>>n>>r;

	int bc = findBC(n,r);
	cout<<bc;
}
