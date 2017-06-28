// PROBLEM :: PRINT ALL THE POSSIBLE PERMUTATION OF STRING

#include <bits/stdc++.h>
using namespace std;

void printPermutation(string s)
{
	sort(s.begin(),s.end());

	do
	{
		cout<<s<<"\n";
	}while(next_permutation(s.begin(),s.end()));
}
int main()
{
	string s;
	cout<<"enter  a string\n";
	cin>>s;

	printPermutation(s);
}
