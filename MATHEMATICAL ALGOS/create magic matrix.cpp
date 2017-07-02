// PROBLEM :: CREATE MAGIC MATRIX.

#include <bits/stdc++.h>
using namespace std;

void createMagicMat(int n)
{
	int mat[n][n];
	memset(mat,0,sizeof(mat));
	int i=n/2;
	int j=n-1;
	for(int k=1;k<=(n*n);)
	{
		if( i==-1 && j==n)
		{
			i=0;
			j=n-2;
		}
		else
		{
			if(i<0)
				i=n-1;
			if(j>=n)
				j=0;
			if(i>=n)
				i=0;
		}

		// checking if location is empty or not
		if(mat[i][j]!=0)
		{
			j-=2;
			i+=1;
			continue;
		}
		else
		{
			mat[i][j]=k++;
			i--;j++;
		}
	}


	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter the value of  n\n";

	cin>>n;

	createMagicMat(n);
}
