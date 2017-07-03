// PROBLEM :: SIEVE OF ERATHOSTENES

#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
	bool arr[100000];
	memset(arr,true,sizeof(arr));

	arr[0]=false;
	arr[1]=false;
	for(int i=2;i<100000;i++)
	{
		if(arr[i]==true)
		{
			for(int j=2;i*j<100000;j++)
			{
				arr[i*j]=false;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		if(arr[i])
			cout<<i<<"   ";
	}
}
int main()
{
	int n;
	cout<<"enter the value of n";
	cin>>n;
	sieve(n);
}
