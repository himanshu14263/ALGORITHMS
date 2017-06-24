// PROBLEM :: CHECK FOR INTEGER OVERFLOW

#include <bits/stdc++.h>
using namespace std;
bool checkOverflow(int a,int b,int&result)
{
	if(a> (INT_MAX - b))
		return -1;
	else
	{
		result = a+b;
		return 0;
	}
}
int main()
{
	int a,b;
	int result = 0;

	cout<<"enter the value of a and b\n";
	cin>>a>>b;

	if(checkOverflow(a,b,result))
		cout<<"there is an overflow";
	else
		cout<<result;
}