// PROBLEM :: SWAP BITS OF GIVEN NUMBER

#include<bits/stdc++.h>
using namespace std;

int swapBits(int x,int p1,int p2,int n)
{
	// first part of given statement is used for considering first range of bits
	// second part of given statement is used to separate out the 'n' bits only
	int set1 = (x>>p1) & ((1U << n)-1);
	int set2 = (x>>p2) & ((1U << n )-1);

	// xor the two sets
	int Xor = set1 ^ set2;

	// put the result generated to their original position
	Xor = (Xor <<p1) |  (Xor << p2);

	// xor with original number to swap the two sets
	int result = x ^ Xor;
	return result;
}

int main()
{
	int x,p1,p2,n;
	cout<<"enter the value of n\n";
	cin>>x;
	cout<<"enter the range\n";
	cin>>p1>>p2;
	cout<<"enter the bits to be swapped\n";
	cin>>n;
	int ans = swapBits(x,p1,p2,n);

	cout<<ans<<"\n";
}
