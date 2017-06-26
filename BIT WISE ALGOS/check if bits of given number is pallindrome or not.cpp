// PROBLEM :: CHECK IF BITS OF PARTICULAR INTEGER IS PALLINDROME OR NOT.

#include <bits/stdc++.h>
using namespace std;
bool isBitSet(int n , int k)
{
	return (n&(1<<(k-1)));
}
bool checkBitsPallindrome(int x)
{
	int l=1;
	int r=sizeof(unsigned int)*8;

	while(l<r)
	{
		if(isBitSet(x,l)!=isBitSet(x,r))
			return false;
		l++;
		r--;
	}
	return true;
}
int main()
{
	int n=(1<<31)+1;

	if(checkBitsPallindrome(n))
		cout<<"PALLINDROME"<<endl;
	else
		cout<<"NOT PALLINDROME"<<endl;

}
