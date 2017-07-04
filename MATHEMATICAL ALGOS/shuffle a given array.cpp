// PROBLEM :: SHUFFLE A GIVEN ARRAY

#include <bits/stdc++.h>
using namespace std;

void shuffleArray(int arr[],int n)
{
	srand(time(NULL));

	for(int i=n-1;i>=0;i--)
	{
		int j=rand()%(n+1);
		swap(arr[i],arr[j]);
	}
}
int main()
{
	int n;
	cout<<"enter the size of array\n";
	cin>>n;

	int arr[n];
	cout<<"enter the value in array";

	for(int i=0;i<n;i++)
		cin>>arr[i];

	shuffleArray(arr,n);

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
