// PROBLEM :: COUNT NUMBER OF BITS TO BE FLIPPED TO CONVERT A TO B.

#include<bits/stdc++.h>
using namespace std;

// EXPECTED ANSWER
int countSetBits(int n)
{
	int cnt=0;
	while(n)
	{
		n&=(n-1);
		cnt++;
	}
	return cnt;
}
int countBitsToChange2(int a,int b)
{
	int x = a^b;
	return countSetBits(x);
}

// MY SOLUTION
int countBitsToChange(int a,int b)
{
	int totalBits = (sizeof(int)*8);
	int cnt = 0;
	for(int i=0;i<totalBits;i++)
	{
		int l = (a & (1<<i));
		int m = (b & (1<<i));

		if(l && m )
			continue;
		else if(!l && !m )
			continue;
		else
			cnt++;
	}
	return cnt;
}
int main()
{
	int a;
	int b;
	cout<<"enter the numbers\n";
	cin>>a>>b;

	int x = countBitsToChange2(a,b);
	cout<<"the bits to change are :: "<<x;
}
