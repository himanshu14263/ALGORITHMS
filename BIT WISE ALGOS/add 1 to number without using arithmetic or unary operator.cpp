// PROBLEM :: ADD 1 TO A NUMBER WITHOUT USING ARITHMETIC OR UNARY OPERATOR

#include<bits/stdc++.h>
using namespace std;

int addOne(int x)
{
	return -(~x);
}
int main()
{
	int x;
	cout<<"enter the number to add one\n";
	cin>>x;
	cout<<addOne(x);
}
