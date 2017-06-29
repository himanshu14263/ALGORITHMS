// PROBLEM :: PRINT ALL THE POSSIBLE PERMUTATION OF STRING

#include <bits/stdc++.h>
using namespace std;


// METHOD 1 :: USING STL'S next_permutation
void printPermutation(string s)
{
	sort(s.begin(),s.end());

	do
	{
		cout<<s<<"\n";
	}while(next_permutation(s.begin(),s.end()));
}

// METHOD 2 :: USING RECURSION 

void printPremutation2(string s,int l,int r)
{
	if(l==r)
		cout<<s;
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(s[l],s[i]);
			printPremutation2(s,l+1,r);
			swap(s[l],s[i]);
		}
	}
}
int main()
{
	string s;
	cout<<"enter  a string\n";
	cin>>s;

	printPermutation(s);
}
