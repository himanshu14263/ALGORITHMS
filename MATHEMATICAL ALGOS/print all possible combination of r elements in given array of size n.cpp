// PROBLEM :: PRINT ALL THE POSSIBLE COMBINATION OF r ELEMENTS OF IN GIVEN ARRAY OF SIZE n

#include <bits/stdc++.h>
using namespace std;

void printComboUtil(int arr[],int data[],int n,int r,int i,int index)
{
	// printing the result when index and r becomes equal.
	if(index==r)
	{
		for(int i=0;i<r;i++)
			cout<<data[i]<<" ";
		cout<<endl;
		return;
	}

	// i become greater than n only during the second recursion line i.e. when the current element is excluded.
	if(i>=n)
		return ;

	// current i element is included in result
	data[index]=arr[i];
	printComboUtil(arr,data,n,r,i+1,index+1);

	// to avoid duplicates(remove comments)
	//while(arr[i]==arr[i+1])
	//	i++;

	// current element is excluded from result.
	printComboUtil(arr,data,n,r,i+1,index);
}
void printCombo(int arr[],int n,int r)
{
	int data[r];

	// this line is added to remove the duplicates
	//sort(arr,arr+n);

	printComboUtil(arr,data,n,r,0,0);
}
int main()
{
	int n;
	cout<<"enter the size of the array\n";
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int r;
	cout<<"Enter the value of r\n";
	cin>>r;

	printCombo(arr,n,r);
}
