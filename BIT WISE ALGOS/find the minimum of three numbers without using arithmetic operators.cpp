// PROBLEM :: FIND MIN OF THREE NUMBERS GIVEN WITHOUT USING ARITHMETIC OPERATORS

#include <bits/stdc++.h>
using namespace std;
int Min(int x,int y)
{
	return   y + ((x-y) & ((x-y)>>(sizeof(int)*8 -1)));
}
int MinOf3(int x,int y,int z)
{
	return Min(x,Min(y,z));
}
int main()
{
	int x ,y,z;
	cout<<"enter the three numbers\n";
	cin>>x>>y>>z;
	cout<<"The minimum of three numbers are "<<MinOf3(x,y,z);
}
