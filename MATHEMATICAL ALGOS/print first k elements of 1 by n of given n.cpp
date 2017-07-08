// PROBLEM :: PRINT FIRST K ELEMENTS OF (1/N) FOR GIVEN N.

#include<bits/stdc++.h>
using namespace std;

void printFirstK(int n,int k)
{
	int rem=1;

	for(int i=0;i<k;i++)
	{
		cout<<(rem*10)/n;
		rem=(rem*10)%n;
	}
}

int main()
{
		int n,k;

		cout<<"enter the value of n";
		cin>>n;
		cout<<"enter the value of k";
		cin>>k;

		printFirstK(n,k);
}
