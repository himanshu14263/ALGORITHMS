// PROBLEM :: FIND MIN AND MAX WITHOUT USING ARITHMETIC OPERATOR

#include <bits/stdc++.h>
using namespace std;

// ((x-y)>>(sizeof(int)*8 -1))  this expression is used to check if the difference is positive or negative this is
//  done by shifting the bits by 31 and finally anding it with the (x-y)
//  if it is negative then above expression becomes 1 and overall expression becomes y + ((x-y) & 1)
//  if it is positive then above expression becomes 0 and overall expression becomes y + ((x-y) & 0)

int Min(int x,int y)
{
	return   y + ((x-y) & ((x-y)>>(sizeof(int)*8 -1)));
}


int Max(int x,int y)
{
	return x - ((x-y) & ((x-y)>>(sizeof(int)*8-1)));
}
int main()
{
	int x ,y;
	cout<<"enter the two nos. to add \n";
	cin>>x>>y;

	cout<<"the minimum value is :: "<<Min(x,y)<<"\n";
	cout<<"the maximum value is :: "<<Max(x,y);
}
