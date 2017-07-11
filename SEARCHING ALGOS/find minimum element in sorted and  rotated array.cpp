// PROBLEM :: FIND MINIMUM ELEMENT IN SORTED AND ROTATED ARRAY.

#include<bits/stdc++.h>
using namespace std;

int f(int arr[],int l,int h)
{
	if(h<l)
		return 0;

	// only one element is present.
	if(l==h)return l;

	// when only two element are present
	if(l+1 ==h)
	{
		if(arr[l]<arr[h])
			return l;
		else
			return h;
	}

	int md=(l+h)/2;

	if(arr[md]<arr[md-1] && arr[md]<arr[md+1])
		return md;

	if(arr[md]<arr[h])
		return f(arr,l,md-1);
	else
		return f(arr,md+1,h);
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
