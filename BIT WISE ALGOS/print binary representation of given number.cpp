// PROBLEM :: PRINT THE BINARY REPRESENTATION OF GIVEN NUMBER.

#include <bits/stdc++.h>
using namespace std;

void printBinaryOf(int n)
{
	if(n>1)
		printBinaryOf(n/2);
	cout<<(n%2);
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;

	printBinaryOf(n);
}
