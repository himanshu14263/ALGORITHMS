// PROBLEM :: COUNT POSSIBLE GROUP OF SIZE 2 AND 3 WHICH HAVAE SUM DIVISIBLE BY 3

#include <bits/stdc++.h>
using namespace std;

int  binomialCoeff(int n,int r)
{

	if(n<r)
		return 0;

	if(n-r<r)
		r=n-r;

	int res=1;
	for(int i=0;i<r;i++)
	{
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}

int  findCount(int arr[],int n)
{
	int count[3]={0};
	int x=0,y=0,z=0;
	for(int i=0;i<n;i++)
	{
		count[arr[i]%3]++;
	}

	x=count[0];
	y=count[1];
	z=count[2];

	int res=0;

		// counting groups of 2 (there are 2 groups possible)
			res+=(binomialCoeff(x,2));

			res+=(binomialCoeff(y,1)*binomialCoeff(z,1));


		// counting groups of 3 (there are 4 groups possible)
			res+=(binomialCoeff(x,3));

			res+=(binomialCoeff(y,3));

			res+=(binomialCoeff(z,3));

			res+=(binomialCoeff(x,1)*binomialCoeff(y,1)*binomialCoeff(z,1));

			return res;
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;

	int arr[n];
	cout<<"entr the data in the array\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<findCount(arr,n);

}
