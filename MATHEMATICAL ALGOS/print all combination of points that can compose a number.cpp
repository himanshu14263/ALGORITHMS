// PRINT ALL COMBINATION OF POINTS THAT CAN FORM A GIVEN NUMBER.

// NOTE :: for this problem we are considering that allowed points are 1,2,3 only

#include <bits/stdc++.h>
using namespace std;

int  MAX_POINTS = 3;

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
void printCombo(int n, int i)
{
	static int arr[100];
	if(n==0)
	{
		printArray(arr,i);
		cout<<"\n";
	}
	else if(n>0)
	{
		for(int k=1;k<=3;k++)
		{
			arr[i]=k;
			printCombo(n-k,i+1);
		}
	}
}
int main()
{
	int n;
	cout<<"enter the value of number\n";
	cin>>n;

	printCombo(n,0);
}
