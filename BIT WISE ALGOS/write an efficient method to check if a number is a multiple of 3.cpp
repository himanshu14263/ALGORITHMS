// PROBLEM :: WRITE A PROGRAM TO CHECK IF A NUMBER IS A MULTIPLE OF 3.

#include<bits/stdc++.h>
using namespace std;

bool isMultipleOf3(int n)
{
	int evenCount =0;
	int oddCount =0;

	if(n<0)n=-n;
	if(n==0)return 1;
	if(n==1)return 0;

	while(n)
	{
		if(n&1)
			oddCount++;
		n>>=1;

		if(n&1)
			evenCount++;
		n>>=1;
	}

	return (isMultipleOf3(abs(oddCount-evenCount)));
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;

	if(isMultipleOf3(n))
		cout<<"yes\n";
	else
		cout<<"no\n";
}
