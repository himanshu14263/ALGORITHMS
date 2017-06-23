// PROBLEM :: BOOLEAN ARRAY PUZZLE (MAKE ALL ELEMENTS ZERO)

#include <bits/stdc++.h>
using namespace std;

void makeZero(int arr[])
{
	arr[!arr[0]]=arr[!arr[1]];
}

void makeZero2(int arr[])
{
	arr[arr[1]]=arr[arr[0]];
}
int main()
{
	int arr[2];
	cout<<"Enter the elements (atleast 1 zero should be there\n";
	for(int i=0;i<2;i++)
		cin>>arr[i];

	makeZero(arr);

	cout<<"final array is :: \n";
	for(int i=0;i<2;i++)
		cout<<arr[i]<<" ";
}
