// PROBLEM :: FIND THE NEXT GREATER ELEMENT WITH SAME SET OF DIGITS.


#include <bits/stdc++.h>
using namespace std;

bool isDesc(string s)
{
	for(int i=1;i<s.length();i++)
	{
		if(s[i]>s[i-1])
			return 0;
	}
	return 1;
}
bool isAsc(string s)
{
	for(int i=1;i<s.length();i++)
	{
		if(s[i]<s[i-1])
			return 0;
	}
	return 1;
}

void nextGreater(string s)
{
	int l=s.size();

	if(isDesc(s))
	{
		cout<<"no soltion exists\n";
		return;
	}

	if(isAsc(s))
	{
		swap(s[l-1],s[l-2]);
		cout<<s;
		return;
	}


	int j;

	// find the first element which is smaller than its next.
	for(j=l-2;j>=0;j--)
	{
		if(s[j]<s[j+1])
			break;
	}

	if(j<0)
	{
		cout<<"no solu'n exists\n";
	}
	else
	{
		int min = j+1;
		for(int i=j+1;i<l;i++)
		{
			if(s[i]<s[min])
				min=i;
		}

		swap(s[j],s[min]);

		sort(s.begin()+j+1,s.end());

		cout<<s<<"\n";
	}
}
int main()
{
	string s;

	cout<<"enter the digit\n";
	cin>>s;

	nextGreater(s);

}
