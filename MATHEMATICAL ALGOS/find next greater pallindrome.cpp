
// PROBLEM :: NEXT GREATER PALLINDROME

#include <bits/stdc++.h>
using namespace std;

bool isAll9s(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		if(arr[i]!=9)
			return 0;
	}
	return 1;
}

void printPallindrome(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void findNextPallindromeUtil(int arr[],int n)
{
	bool leftSmaller=false;
	int mid = (n/2);
	int i = mid-1;

	int j = (n%2)?(mid+1):mid;

	// ignore those places where i and j are equal
	while(i>=0 && arr[i]==arr[j])
	{
		i--;j++;
	}

	// check if 1 is to be added to the mid element
	if(i<0 || arr[i]<arr[j])
		leftSmaller = true;

	while(i>=0)
	{
		arr[j++]=arr[i--];
	}

	if(leftSmaller)
	{
		int carry = 1;
		int i=mid-1;

		if(n%2)
		{
			arr[mid]+=carry;
			carry=arr[mid]/10;
			arr[mid]%=10;
			j=mid-1;
		}
		else
			j=mid;

		while(i>=0)
		{
			arr[i]+=carry;
			carry=arr[i]/10;
			arr[i]%=10;
			arr[j++]=arr[i--];
		}
	}
}
void findNextPallindrome(int arr[],int n)
{
 	if(isAll9s(arr,n))
	{
		cout<<1;
		for(int i=0;i<n;i++)
			cout<<0;
		cout<<1;
	}
	else
	{
		findNextPallindromeUtil(arr,n);
		printPallindrome(arr,n);
	}
}
int main()
{
	int n;
	cout<<"enter the size of array"<<endl;

	cin>>n;
	int arr[n];

	cout<<"enter the data in array"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	findNextPallindrome(arr,n);
}
