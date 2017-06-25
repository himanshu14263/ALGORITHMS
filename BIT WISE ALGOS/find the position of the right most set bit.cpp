// PROBLEM :: FIND THE POSITION OF THE RIGHT-MOST SET BIT.

#include <bits/stdc++.h>
using namespace std;

// LOGIC :: when we do 2's complement only the right most set bit remain unchanged
//                simple way to find 2's complement is do -x
int findPos(int x)
{
	return (log2(x&(-x)))+1;
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;

	int x = findPos(n);

	cout<<"the position of right most set bit is :: "<<x;
}
