// PROBLEM :: FIND LEXOGRAPHICAL RANK OF GIVEN STRING.

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if(n==1)
		return 1;
	return n * fact(n-1);
}

int findSmallerString(string s,int pos)
{
	int l = s.length();
	int cnt=0;
	for(int i=pos+1;i<l;i++)
	{
		if(s[i]<s[pos])
		{
			cnt++;
		}
	}
	return cnt;
}
int findRank(string s)
{
	int len = s.length();

	int mul = fact(len);

	int rank=1;

	int countSmallerInRight;
	for(int i=0;i<len;i++)
	{
		countSmallerInRight = findSmallerString(s,i);
		mul = mul/(len-i);
		rank = rank + (countSmallerInRight * mul);
	}

	return rank;
}
int main()
{
	string s;
	cout<<"enter the string "<<endl;
	cin>>s;

	int rank=findRank(s);
	cout<<"the rank of string is :: "<<rank;

}
