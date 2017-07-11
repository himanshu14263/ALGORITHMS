// PROBLEM :: FIND MAXIMUM ELEMENT WHICH IS FIRST INCREASING AND THEN DECREASING

#include <bits/stdc++.h>
using namespace std;

int f(int arr[],int l,int h)
{
	if(l>h)
		return -1;

	if(l==h)
		return l;

	cout<<l <<" "<<h<<endl;

	if(l+1 ==h)
	{
		if(arr[l]>arr[h])
			return l;
		else
			return h;
	}

	int md=(l+h)/2;


	if(arr[md]>arr[md-1] && arr[md]>arr[md+1])
		return md;

	if(arr[md]>arr[md-1] && arr[md]<arr[md+1])
		return f(arr,md,h);
	return f(arr,l,md);
}
int main()
{
	int n;
	cout<<"enter the size of array\n";
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int md =f(arr,0,n-1);
	cout<<arr[md];
}
