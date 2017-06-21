// COUNT SET BIT IN AN INTEGER


#include<bits/stdc++.h>
using namespace std;

// time complexity :: theta of (log n)
int countSetBits(int n)
{
	int cnt=0;
	while(n>0)
	{
		if((n&1)==1)
			cnt++;
		n=n>>1;
	}
	return cnt;
}

// time complexity :: O(log n) using Brian K. Algorithm
int countSetBits2(int n){
	int count=0;
	while(n)
	{
		n = (n & (n-1));
		count ++;
	}
	return count;
}

// time complexity :: O(1)   using predefined method
int countSetBits3(int n){
	return __builtin_popcount(n);
}
int main()
{
	int n;
	cout<<"enter the number\n";
	cin>>n;
	cout<<"method 1 :: "<<countSetBits(n)<<"\n";
	cout<<"method 2 :: "<<countSetBits2(n)<<"\n";
	cout<<"method 3 :: "<<countSetBits3(n)<<"\n";
}
