// PROBLEM :: RESERVIOR SAMPLING

#include <bits/stdc++.h>
using namespace std;

void fillReservior(int stream[],int n,int k)
{
	int reservior[n];

	for(int i=0;i<n;i++)
		reservior[i]=stream[i];



	cout<<endl;
	srand(time(NULL));

	for(int j=n;j<k;j++)
	{
		int x = rand()%(j+1);

		if(x<n)
			reservior[x]=stream[j];
	}

	for(int i=0;i<n;i++)
	{
		cout<<reservior[i]<<" ";
	}
}
int main()
{
	int n;

	cout<<"enter the size of reservior\n";
	cin>>n;

	int stream[ ]={1,2,3,4,5,6,7,8,9,10};

	fillReservior(stream,n,10);
}
