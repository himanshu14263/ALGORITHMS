// PROBLEM :: COUNT WAYS TO REACH Nth FLOOR

// condition if only allowed steps are 1 and 2

#include<bits/stdc++.h>
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
int main()
{
	int n ;
	cout<<"enter the value of n";
	cin>>n;

	cout<<countWays(n);
}


