// PROBLEM :: GENERATE NUMBERS FROM 1 TO 5 WITH EQUAL PROBABILITY.

#include <bits/stdc++.h>
using namespace std;

int foo()
{
	// given function which generate numbers from 1 to 5 with equal probability.
}
void generateNumber()
{
	int x = 5*foo()+foo()-5;

	if(x<22)
	{
		return (x%7)+1;
	}
	return generateNumber();
}
int main()
{
	int x = generateNumber();
}