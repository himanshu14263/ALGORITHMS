// PROBLEM :: FIND THE SMALLEST NUMBER WHOSE DIGITS MULTIPLY TO FORM THE GIVEN NUMBER.

#include<bits/stdc++.h>
using namespace std;

void findSmallest(int n)
{

	if(n<10)
	{
		cout<<n+10;
		return ;
	}
	vector<int>res;

	for(int i=9;i>=2;i--)
	{
		while(n%i==0)
		{
			res.push_back(i);
			n/=i;
		}
	}

	if(n>10)
	{
		cout<<"solution doesn't exists\n";
		return ;
	}
	else
	{
		int l=res.size();
		for(int i=l-1;i>=0;i--)
			cout<<res[i];
	}
}

int main()
{
	int n;
	cout<<"enter the value of n";
	cin>>n;

	findSmallest(n);
}
