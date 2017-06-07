// PROBLEM :: CHECK IF TWO GIVEN INTEGERS HAVE OPPOSITE SIGNS WITHOUT USING ANY ARITHMETIC OPERATORS

#include<bits/stdc++.h>
using namespace std;

bool checkSign(int a,int b)
{
	if((a^b)<0)
		return true;
	else
		return false;
}
int main()
{
	int a,b;
	cout<<"enter the two numbers\n";
	cin>>a>>b;
	if(checkSign(a,b))
		cout<<"they have opposite signs";
	else
		cout<<"they don't have opposite signs";
}
