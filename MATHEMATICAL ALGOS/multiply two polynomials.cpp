// PROBLEM :: MULTIPLY TWO POLYNOMIALS

#include<bits/stdc++.h>
using namespace std;

void mulPoly(int a[],int b[],int n1,int n2)
{
	int res[n1+n2-1];

	memset(res,0,sizeof(res));

	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			res[i+j]+=(a[i]*b[j]);
		}
	}

	for(int i=0;i<n1+n2-1;i++)
		cout<<res[i]<<" ";
	cout<<"\n";
}
int main()
{
	int n1,n2;
	cout<<"enter the size of first array"<<endl;
	cin>>n1;
	cout<<"enter the size of second array"<<endl;
	cin>>n2;

	int a[n1],b[n2];

	cout<<"enter data in first array\n";
	for(int i=0;i<n1;i++)
		cin>>a[i];

	cout<<"enter data in second array\n";
	for(int i=0;i<n2;i++)
		cin>>b[i];

	mulPoly(a,b,n1,n2);
}
