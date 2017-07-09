// PROBLEM :: FIND TWO ELEMENT WHOSE SUM IS CLOSEST TO ZERO

#include <bits/stdc++.h>
using namespace std;

void findTwo(int arr[],int n)
{
	sort(arr,arr+n);

	int l=0,h=n-1;

	int res=INT_MAX;

	int finalMin,finalMax;

	while(l<h)
	{
		int sum = arr[l]+arr[h];
		if(abs(sum)<abs(res))
		{
			res=sum;
			finalMin=l;
			finalMax=h;
		}

		if(sum<0)
			l++;
		else
			h--;
	}

	cout<<arr[finalMin]<<" "<<arr[finalMax];
}
int main()
{
	int n;
	cout<<"enter the size of array\n";
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	findTwo(arr,n);
}
