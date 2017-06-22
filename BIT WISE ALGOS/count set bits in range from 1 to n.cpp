// PROBLEM :: COUNT SET BITS IN NUMBER FROM 1 TO N

// REQUIRED TIME COMPLEXITY :: O(log n)

#include <bits/stdc++.h>
using namespace std;

///////////////////		APPROACH 1 :: TIME COMPLEXITY (THETA (LOGN))    /////////////////////////////////
int countSetBitsUtil(int x){
	int setBits=0;

	while(x>0)
	{
		if((x&1)==1)
			setBits++;
		x=x>>1;
	}
	return setBits;
}
int countSetBits(int n)
{
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=countSetBitsUtil(i);
	}
	return ans;
}

//////////////////////    APPROACH 2 :: TIME COMPLEXITY (O(logn))     ////////////////////////////


int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;

	cout<<countSetBits(n);
}
