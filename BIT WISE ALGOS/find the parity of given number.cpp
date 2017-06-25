// PROBLEM :: FIND THE PARITY OF GIVEN NUMBER.

#include <bits/stdc++.h>
using namespace std;

bool parity(int n)
{
	int cnt=0;
	while(n)
	{
		n&=(n-1);
		cnt++;
	}

	return cnt%2==0?1:0;
}
int main()
{
	int n;
	cout<<"Enter the value of n";
	cin>>n;

	parity(n)?cout<<"even":cout<<"odd";

}
