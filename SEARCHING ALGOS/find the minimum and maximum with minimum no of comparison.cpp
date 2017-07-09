// PROBLEM :: FIND MINIMUM AND MAXIMUM ELEMENT WITH MIN NO OF COMPARISON

#include<bits/stdc++.h>
using namespace std;


void findMinMax(int arr[],int n)
{
	pair<int ,int >p;

	int i;
	if(n%2==0)
	{
		p.first=min(arr[0],arr[1]);
		p.second=max(arr[0],arr[1]);
		i=2;
	}
	else
	{
		p.first=p.second=arr[0];
		i=1;
	}

	while(i<n-1)
	{
		if(arr[i]<arr[i+1])
		{
			if(p.first>arr[i])
				p.first=arr[i];
			if(p.second<arr[i+1])
				p.second=arr[i+1];
		}
		else
		{
			if(p.first>arr[i+1])
				p.first=arr[i+1];
			if(p.second<arr[i])
				p.second=arr[i];
		}
		i+=2;
	}

	cout<<"min :: "<<p.first<<endl;
	cout<<"max :: "<<p.second<<endl;
}
int main()
{
	int n;
	cout<<"enter the size of array\n";
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	findMinMax(arr,n);
}
