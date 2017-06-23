#include <bits/stdc++.h>
using namespace std;
void turnOffRightMostBit(int&x)
{
	x = (x&(x-1));
}
int main()
{
	int x;
	cout<<"enter the number \n";
	cin>>x;

	turnOffRightMostBit(x);
	cout<<x<<endl;
}