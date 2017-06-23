#include <bits/stdc++.h>
using namespace std;
int ABS(int n)
{
	int mask = n >> (sizeof(int)*8-1);
	return (mask + n) ^ mask;
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;
	cout<<ABS(n);
}