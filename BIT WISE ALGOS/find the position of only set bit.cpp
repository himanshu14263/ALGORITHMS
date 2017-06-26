// PROBLEM :: FIND THE POSITION OF ONLY SET BIT.

#include<bits/stdc++.h>
using namespace std;

bool isPowerOf2(int x)
{
	return (x && !(x & (x-1)));
}
int findPos(int x)
{
	if(!isPowerOf2(x))
		return 0;

	return (log2(x&-x))+1;
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;

	int x=findPos(n) ;
	x?cout<<"the position is :: "<<x:cout<<"there are more than one 1\n";

}
