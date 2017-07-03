// PROBLEM :: CHECK DIVISIBILITY BY 7 without using modulo operator or floating point arithmetic.

#include <bits/stdc++.h>
using namespace std;

bool isDivBy7(int num)
{
	if(num<0)
		return isDivBy7(-num);

	if(num==0 || num ==7)
		return 1;

	if(num<10)
		return 0;

	return isDivBy7(num/10 - 2*(num-num/10*10));
}
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;

	if(isDivBy7(n))
		cout<<"DIVISIBLE"<<endl;
	else
		cout<<"NOT DIVISIBLE"<<endl;
}
