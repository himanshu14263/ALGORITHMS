// PROBLEM :: FIND REPEATING AND MISSING ELEMENT

#include <bits/stdc++.h>
using namespace std;


void findRepeatingMissing(int arr[],int n)
{
	int xoR=arr[0];

	for(int i=1;i<n;i++)
		xoR^=arr[i];

	for(int i=1;i<=n;i++)
		xoR^=i;

	int rightMostSetNo= xoR & (-xoR);

	int num1=0;
	int num2=0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]&rightMostSetNo)
			num1^=arr[i];
		else
			num2^=arr[i];
	}

	for(int i=1;i<=n;i++)
	{
		if(i&rightMostSetNo)
			num1^=i;
		else
			num2^=i;
	}

	cout<<num1<<" "<<num2<<endl;
}
int main()
{
	int n;
	cout<<"enter the size of array\n";
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	findRepeatingMissing(arr,n);
}
