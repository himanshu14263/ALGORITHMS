// PROBLEM :: MAKE THE LARGEST MULTIPLE OF 2,3,AND 5 FROM AN ARRAY OF ELEMENTS

#include <bits/stdc++.h>
using namespace std;

void makeLargestElement(int arr[],int n)
{
	vector<int>v;

	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
			continue;
		else
			v.push_back(arr[i]);
	}

	if(v.size()==(sizeof(arr)/sizeof(int)))
		cout<<"NO SOLUTION EXISTS"<<endl;

	else
	{
		sort(v.begin(),v.end());
		int sum =accumulate(v.begin(),v.end(),0);

		queue<int>q1;
		queue<int>q2;
		queue<int>q0;

		for(int i=0;i<v.size();i++)
		{
			if(v[i]%3 == 0)
				q0.push(v[i]);
			if(v[i]%3 == 1)
				q1.push(v[i]);
			if(v[i]%3 == 2)
				q2.push(v[i]);
		}

		if(sum%3==1)
		{
			if(!q1.empty())
				q1.pop();
			else if(q2.size()>=2)
			{
				q2.pop();
				q2.pop();
			}
			else
			{
				cout<<"NO SOLUTION EXISTS"<<endl;
			}
		}

			if(sum % 3 == 2)
			{
				if(!q2.empty())
					q2.pop();
				else if(q1.size()>=2)
				{
					q1.pop();
					q1.pop();
				}
				else
				{
					cout<<"NO SOLUTION EXISTS"<<endl;
				}
			}
			if(q1.empty() && q2.empty() && q0.empty())
			{
				cout<<"not possible"<<endl;
			}
			else
			{

								vector<int>result;
								while(!q0.empty())
								{
									result.push_back(q0.front());
									q0.pop();
								}
								while(!q1.empty())
								{
									result.push_back(q1.front());
									q1.pop();
								}
								while(!q2.empty())
								{
									result.push_back(q2.front());
									q2.pop();
								}


								int size = result.size();

								sort(result.begin(),result.end(),greater<int>());

								 for(int i=0;i<size;i++)
								 {
									 cout<<result[i];
								 }

								 cout<<0;

		}
	}
}
int main()
{
	int n;
	cout<<"enter the size of array\n";
	cin>>n;

	int arr[n];

	cout<<"enter the values in the array\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];

	makeLargestElement(arr,n);
}
