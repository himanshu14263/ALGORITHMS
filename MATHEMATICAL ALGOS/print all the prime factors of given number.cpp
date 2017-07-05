// PROBLEM :: EFFICIENT WAY TO PRINT ALL THE  PRIME FACTORS OF A GIVEN NUMBER

#include <bits/stdc++.h>
using namespace std;
void findPrimeFactor(int n)
{
	while(n%2==0)
	{
		cout<<2<<endl;
		n/=2;
	}

   for(int i=3;i<=sqrt(n);i++)
   {
	   while(n%i==0)
	   {
		   cout<<i<<endl;
		   n/=i;
	   }
   }

   if(n>2)
	   cout<<n;
}
int main()
{
	int n;
	cout<<"enter the number \n";
	cin>>n;
	findPrimeFactor(n);
}
