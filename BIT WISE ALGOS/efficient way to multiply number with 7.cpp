// PROBLEM :: EFFICIENT WAY TO MULTIPLY GIVEN NUMBER WITH 7

#include <bits/stdc++.h>
using namespace std;

int multiplyBy7(int n)
{
	return ((n<<3)-n);
}
int main()
{
	int n ;
	cout<<"enter the number\n";
	cin>>n;

	cout<<multiplyBy7(n);
}
