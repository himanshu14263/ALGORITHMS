// PROBLEM :: FIND THE LARGEST NUMBER DIVISIBLE BY 3

#include<bits/stdc++.h>
using namespace std;

void findLargest(int arr[],int n)
{
	queue<int>q0,q1,q2;

	int sum=0;

	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		int remainder=arr[i]%3;
		if(remainder==0)
			q0.push(arr[i]);
		if(remainder==1)
			q1.push(arr[i]);
		if(remainder==2)
			q2.push(arr[i]);
	}

	int sumMod=sum%3;
	vector<int>v;


	if(sumMod==1)
	{
		if(!q1.empty())
		{
			q1.pop();
		}
		else if(q2.size()<2)
		{
			cout<<"solution doesn't exists"<<endl;
			return ;
		}
		else
		{
			q2.pop();q2.pop();
		}
	}

	if(sumMod==2)
	{
		if(!q2.empty())
		{
			q2.pop();
		}
		else if(q1.size()<2)
		{
			cout<<"solution doesn't exists"<<endl;
			return ;
		}
		else
		{
			q1.pop();q1.pop();
		}
	}


	if(q1.empty() && q2.empty() && q0.empty())
		cout<<"solution doesn't exists\n";
	else
	{
		while(!q0.empty())
			{
				v.push_back(q0.front());
				q0.pop();
			}
			while(!q1.empty())
			{
				v.push_back(q1.front());
				q1.pop();
			}

			while(!q2.empty())
			{
				v.push_back(q2.front());
				q2.pop();
			}

			sort(v.begin(),v.end(),greater<int>());

			for(int i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
	}

}
int main()
{
	int n;

	cout<<"enter the size of the array\n";
	cin>>n;

	int arr[n];
	cout<<"enter the elements"<<endl;

	for(int i=0;i<n;i++)
		cin>>arr[i];

	findLargest(arr,n);
}
