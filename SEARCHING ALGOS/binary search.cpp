// PROBLEM :: BINARY SEARCH

#include <bits/stdc++.h>
using namespace std;

int bsUtil(int arr[],int l,int h,int val)
{
	if(l>h)return -1;

	int mid=(l+h)/2;

	if(arr[mid]==val)return mid;

	if(arr[mid]<val)
		return bsUtil(arr,mid+1,h,val);
	return bsUtil(arr,l,mid,val);

}
int bs(int arr[],int n,int val)
{
	return bsUtil(arr,0,n-1,val);
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

	cout<<"found at location ::"<<bs(arr,n,val);
}
