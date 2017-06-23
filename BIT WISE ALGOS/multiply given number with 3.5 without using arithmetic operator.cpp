// PROBLEM ::  MULTIPLY THE GIVEN NUMBER WITH 3.5 WITHOUT USING ARITHMETIC OPEARTORS

#include <bits/stdc++.h>
using namespace std;

int multiply(int x){
	return (x<<1)+x+(x>>1);
}
int main()
{
	int x;
	cout<<"enter the number to add one\n";
	cin>>x;
	cout<<multiply(x);
}
