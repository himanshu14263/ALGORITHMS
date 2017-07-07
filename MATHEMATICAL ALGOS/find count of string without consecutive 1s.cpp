// PROBLEM :: COUNT BINARY STRING WITHOUT CONSECUTIVE 1'S

#include<bits/stdc++.h>
using namespace std;

int countString(int  n)
{

	int l = n;

	int a[l+1];   // string that ends with 0
	int b[l+1];   // strings that ends with 1

	a[0]=b[0]=0;
	a[1]=b[1]=1;

	for(int i=2;i<=l;i++)
	{
		a[i]=a[i-1]+b[i-1];	  // b/c strings ending with 0 can end with both 0 and 1
		b[i]=a[i-1];		// b/c strings ending with 1 can only end with 0 .
	}

	return a[l]+b[l];

}
int main()
{
	int n ;
	cout<<"enter the value of n";
	cin>>n;

	cout<<countString(n);
}
