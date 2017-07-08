// PROBLEM :: ADD TWO POLYNOMIAL

#include <bits/stdc++.h>
using namespace std;

void addPoly(int a[],int b[],int n1,int n2)
{
	int res[n1];
	for(int i=0;i<n1;i++)
		res[i]=a[i];

	for(int i=0;i<n2;i++)
		res[i]+=b[i];

	for(int i=0;i<n1;i++)
		cout<<res[i]<<" ";
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

		addPoly(a,b,n1,n2);
}
