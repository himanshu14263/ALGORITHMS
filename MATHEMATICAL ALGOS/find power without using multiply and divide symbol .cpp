// PROBLEM :: FIND POWER WITHOUT USING * AND / OPERATOR

#include <bits/stdc++.h>
using namespace std;

// RECURSIVE METHOD TO FIND THE POWER
int multiply(int a,int b)
{
	if(b==0)
		return 0;
	return a+multiply(a,b-1);
}

int recursivePow(int a, int b)
{
	if(b==0)return 1;

	return multiply(a,recursivePow(a,b-1));
}


// ITERATIVE METHOD TO FIND THE POWER
int iterativePow(int a,int b)
{
	int inc=a;
	int ans=a;
	for(int i=1;i<b;i++)
	{
		for(int j=1;j<a;j++)
		{
			ans+=inc;
		}
		inc = ans;
	}
	return ans;
}
int main()
{
	int a,b;
	cout<<"enter the value to find power\n";
	cin>>a>>b;

	cout<<"using recursive method :: "<<recursivePow(a,b)<<endl;
 	cout<<"using iterative method :: "<<iterativePow(a,b);
}
