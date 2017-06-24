// PROBLEM :: FIND TWO NON-REPEATING ELEMENTS IN ARRAY OF REPEATING ELEMENTS

#include <bits/stdc++.h>
using namespace std;
void findNonRepeating(int arr[],int n,int*x,int*y)
{
	int Xor = 0;
	for(int i=0;i<n;i++)
		Xor=Xor^arr[i];

	*x=0;
	*y=0;

	int rightMostSetBit = Xor & (-Xor);

	for(int i=0;i<n;i++)
	{
		if(arr[i] & rightMostSetBit)
			*x = *x^arr[i];
		else
			*y=*y ^ arr[i];
	}
}
int main()
{
	int arr[]= {1,1,2,2,3,3,4,5};
	int x,y;

	int n= sizeof(arr)/sizeof(int );
	findNonRepeating(arr,n,&x,&y);

	cout<<"the non-repeating elements are :: "<<x <<"   "<<y;
}
