// PROBLEM :: FIND WHETHER THE GIVEN NUMBER IS POWER OF TWO

#include <bits/stdc++.h>
using namespace std;

bool isPowerOf4(int n)
{
	// checking if there is only one set bit present
	if(n && !(n&(n-1)))
	{
		int cnt =0;
		while(n>1)
		{
			n>>=1;
			cnt++;
		}

		// check if number of zeroes present are even or not
		return (cnt%2==0)?1:0;
	}

	return 0;
}
int main()
{
	int x;
	cout<<"enter the number\n";
	cin>>x;
	if(isPowerOf4(x))
		cout<<"it is \n";
	else
		cout<<"it isn't\n";
}
