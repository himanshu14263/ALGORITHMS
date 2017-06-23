// PROBLEM :: SNOOB( same number of one bits )PROBLEM
// DESCRIPTION :: FIND NEXT HIGHER NUMBER WITH SAME NUMBER OF BITS

#include<bits/stdc++.h>
using namespace std;

int SNOOB(int x)
{
	int rightOne = x&(-x);
	int nextHigherOneBit = x + rightOne;
	int rightOnePattern = x ^ nextHigherOneBit;
	rightOnePattern = rightOnePattern / rightOne;
	rightOnePattern >>=2;
	int nextNum = nextHigherOneBit | rightOnePattern;
	return nextNum;
}
int main()
{
	int n;
	cout<<"Enter the number \n";
	cin>>n;
	cout<<"the next number is ::: "<<SNOOB(n);
}
