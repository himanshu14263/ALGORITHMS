// PROBLEM :: COUNT WAYS TO REACH Nth FLOOR

// condition if only allowed steps are 1 and 2

#include <bits/stdc++.h>
using namespace std;


int fibo(int n)
{
	if(n<=1)
		return n;

	return fibo(n-1)+fibo(n-2);
}
int countWays(int n)
{
	return fibo(n+1);
}

// GENERALIZED ANSWER FOR ANY NO OF STEPS ALLOWED TO REACH Nth FLOOR.

int generalizedAnswer(int n,int m)
{
	if(n<=1)return n;

	int res=0;

	for(int i=1; i<=m &&  i<=n; i++)
	{
		res+=generalizedAnswer(n-i,m);
	}
	return res;
}
int countWays2(int n,int m)
{
	return generalizedAnswer(n+1,m);
}
int main()
{
	int n ;
	cout<<"enter the value of n";
	cin>>n;

	cout<<countWays(n)<<endl;

	int m;
	cout<<"enter the no. of steps allowed\n";
	cin>>m;
	cout<<"generalizedAnswer() ::"<<countWays2(n,m);
}


