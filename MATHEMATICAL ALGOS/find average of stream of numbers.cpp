// PROLEM :: FIND AVERAGE OF STREAM OF NUMBERS

#include <bits/stdc++.h>
using namespace std;

int main()
{

	int arr[20];
	for(int i=1;i<=20;i++)
		arr[i-1]=i*10;

	int cnt=1;
	float avg=0;
	for(int i=0;i<20;i++)
	{
		avg+=arr[i];
		printf("%.2f\n",avg/cnt);
		cnt++;
	}
}
