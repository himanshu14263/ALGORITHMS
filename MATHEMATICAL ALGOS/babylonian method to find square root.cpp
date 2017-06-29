// PROBLEM :: BABYLONIAN METHOD TO FIND SQUARE ROOT


#include <bits/stdc++.h>
using namespace std;

float findSquareRoot(int n)
{
	float x = n;
	float y = 1;

	float e = 0.000001;

	while((x-y)>e)
	{
		x = (x+y)/2;
		y = (n/x);
	}

	return x;
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;

	float ans = findSquareRoot(n);

	cout<<"answer using babylonian ::		"<<ans<<endl;

	cout<<"answer using sqrt() :: 			"<<sqrt(n);
}
