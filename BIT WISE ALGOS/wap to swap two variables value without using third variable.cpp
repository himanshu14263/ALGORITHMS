// PROBLEM :: SWAP VALUE OF TWO VARIABLES WITHOUT USING THIRD VARIABLE.

#include <bits/stdc++.h>
using namespace std;

void swap1(int&a,int&b)
{
	a = a+b;
	b = a-b;
	a = a-b;
}

void swap2(int&a,int&b)
{
	a = a*b;
	b = a/b;
	a = a/b;
}

void swap3(int&a,int&b)
{
	a = a^b;
	b = a^b;
	a = a^b;
}
int main()
{
	int a,b;
	cout<<"enter the value of a and b\n";
	cin>>a>>b;

	//swap1(a,b);
	//swap2(a,b);
	swap3(a,b);
	cout<<"the value after swap are ::"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;

}
