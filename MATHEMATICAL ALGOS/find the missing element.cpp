// PROBLEM :: FIND THE MISSING ELEMENT.

#include<bits/stdc++.h>
using namespace std;

void func(int arr[],int n)
{
	int x= n+1;
	int actualSum = x*(x+1)/2;

	int arrSum =0;
	for(int i=0;i<n;i++)
		arrSum+=arr[i];

	cout<<actualSum - arrSum<<endl;
}

void func2(int arr[],int n)
{
	int actualSum = 1;

	for(int i=2;i<=n+1;i++)
		actualSum^=i;

	for(int i=0;i<n;i++)
		actualSum^=arr[i];

	cout<<actualSum<<endl;
}

int main()
{
		int n;
		cout<<"enter the value of n";
		cin>>n;

		int arr[n];
		cout<<"enter the data\n";

		for(int i=0;i<n;i++)
			cin>>arr[i];

		func(arr,n);
}
