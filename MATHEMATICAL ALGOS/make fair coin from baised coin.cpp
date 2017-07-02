// PROBLEM :: MAKE FAIR COIN FROM BAISED COIN

#include <bits/stdc++.h>
using namespace std;

void foo()
{
	// this function returns with baised probability
	// heads have 40%
	// tails have 60%
}
bool myfunc()
{
	int val1 = foo();
	int val2 = foo();

	if(val1 == 0 && val2==1)
		return 0;
	if(val1 == 1 && val2==0)
		return 1;

	return myfunc();
}
int main()
{
	int n;
	myfunc();		// makes baised coin fair.

}