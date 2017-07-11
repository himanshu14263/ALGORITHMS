// PROBLEM :: FIND MINIMUM ELEMENT IN SORTED AND ROTATED ARRAY.

#include <bits/stdc++.h>
using namespace std;

int f(int arr[],int l,int h,int val)
{
	if(l<=h)
	{
		int md=(l+h)/2;
		if(md==arr[md])
			return md;

		if(md>arr[md])
			 return f(arr,md+1,h,val);
		else
			return f(arr,l,md-1,val);
	}
	return -1;
}
int main()
{
	int n;
	cout<<"enter the size of array\n";
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int x;
	cout<<"enter the value whose frequency to be found\n";
	cin>>x;
	int md =f(arr,0,n-1,x);
	cout<<md;
}
