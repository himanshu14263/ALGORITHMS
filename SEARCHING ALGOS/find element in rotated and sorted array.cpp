// PROBLEM :: SEARCH ELEMENT IN SORTED AND ROTATED ARRAY

#include <bits/stdc++.h>
using namespace std;

int searchElement(int arr[],int l,int h,int val)
{
	if(l>h)return -1;
	int mid=(l+h)/2;

	if(arr[mid]==val)return mid;

	if(arr[l]<=arr[mid])
	{
		if(val>=arr[l] && val<=arr[mid])
			return searchElement(arr,l,mid-1,val);
		return searchElement(arr,mid+1,h,val);
	}

	if(val>=arr[mid] && val<=arr[h])
		return searchElement(arr,mid+1,h,val);
	return searchElement(arr,l,mid-1, val);
}
int main()
{
	int n;
	cout<<"enter the size of array\n";
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<"enter the number to be searched\n";
	int val;
	cin>>val;

	cout<<"found at location ::"<<searchElement(arr,0,n-1,val);
}
