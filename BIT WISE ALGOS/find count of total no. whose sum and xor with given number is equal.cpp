// COUNT NUMBER WHOSE SUM WITH x IS EQUAL TO THE XOR WITH x AND ARE LESS THAN given number

#include<bits/stdc++.h>
using namespace std;
int count_zero(int x)
{
	int noz=0;
	while(x>0)
	{
		if((x&1) == 0)
		{
			noz++;
		}
		x=x>>1;
	}
	return noz;
}
int count(int x)
{
	int noz = count_zero(x);
	return 1<<noz;
}
int main()
{
	int n;
	cout<<"enter a number\n";
	cin>>n;
	int x = count(n);
	cout<<"the total numbers whose sum and xor with "<<n<<" are equal are :: "<<x<<"\n";
}
