// PROBLEM :: COUNT TRAILING ZEROES IN FACTORIAL OF A NUMBER.

#include <bits/stdc++.h>
using namespace std;

int  findCount(int n)
{
	int res=0;

	for (int i = 5; n /i>=1;i= i*5)
	{
		res+=(n/i);
	}
	return res;
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;

	int res = findCount(n);
	cout<<"the number of trailing zeroes are ::"<<res<<"\n";
}
