// PROBLEM :: ADD TWO NUMBERS WITHOUT USING ARITHMETIC OPERATOR

#include <bits/stdc++.h>
using namespace std;

int add(int x,int y)
{
	while(y!=0)
	{
		int carry = x & y;
		x = x ^ y ;
		y = carry << 1;
	}
	return x;
}

int add2(int x,int y)
{
	if(y==0)
		return x;
	return add2( x^y , (x&y)<<1);
}
int main()
{
	int x ,y;
	cout<<"enter the two nos. to add \n";
	cin>>x>>y;

	cout<<"METHOD 1 :: "<<add(x,y)<<"\n";
	cout<<"METHOD 2 :: "<<add2(x,y)<<"\n";
}
