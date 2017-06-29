// PROBLEM :: CHECK IF GIVEN NUMBER IS LUCKY OR NOT

#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n)
{
	static int counter=2;
	int currPos = n;

	if(n<counter)
		return 1;

	if(n%counter==0)
		return 0;

	int nextPos = (currPos)-(currPos/counter);

	counter++;
	return isLucky(nextPos);
}
int main()
{
	int n;
	cout<<"enter the number to check if lucky\n";
	cin>>n;
	if(isLucky(n))
		cout<<"LUCKY\n";
	else
		cout<<"NOT LUCKY\n";
}
