// PROBLEM :: PASCALS TRIANGLE

#include <bits/stdc++.h>
using namespace std;

int binomialCoeff(int n, int r)
{
	if(r>n-r)
		r=n-r;

	int res = 1;
	for(int i=0;i<r;i++)
	{
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}
void pascalTriangle1(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<binomialCoeff(i,j)<<" ";
		}
		cout<<endl;
	}
}

void pascalTriangle2(int n)
{
	int mat[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(j==0 || j==i)
				mat[i][j]=1;
			else
				mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter the value of n\n";

	cin>>n;
	cout<<"using O(n^3) approach :: "<<endl;pascalTriangle1(n);

	cout<<endl;

	cout<<"using O(n^2) approach :: "<<endl;pascalTriangle2(n);
}
