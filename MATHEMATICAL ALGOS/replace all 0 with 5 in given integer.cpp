// PROBLEM :: REPLACE ALL ZEROES WITH 5 IN GIVEN INTEGER.

#include<bits/stdc++.h>
using namespace std;

int replace0with5(int n)
{
	if(n<=0)
		return 0;

	int digit=n%10;
	if(digit==0)
		digit=5;

	return (replace0with5(n/10)*10+digit);
}

int main()
{
	int n;
	cout<<"enter the value of n";
	cin>>n;

	cout<<replace0with5(n);
}
