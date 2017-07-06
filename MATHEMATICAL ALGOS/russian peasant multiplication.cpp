// PROBLEM :: RUSSIAN PEASANT MULTIPLICATION

#include <bits/stdc++.h>
using namespace std;

int mul(int a,int b)
{
	int res=0;
	while(b>0)
	{
		if(b&1)
			res+=a;

		a<<=1;
		b>>=1;
	}
	return res;
}
int main()
{
	int a,b;
	cout<<"enter the value of a and b\n";
	cin>>a>>b;

	cout<<mul(a,b)<<endl;

}
