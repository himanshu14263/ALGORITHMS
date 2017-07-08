// PROBLEM :: CALCULATE ANGLE BETWEEN HOUR HAND AND MINUTE HAND.

#include <bits/stdc++.h>
using namespace std;

void findAngle(int h,int m)
{
	//first checking if input is correct.
	if(h<0 || m<0 || h>12 || m>60)
	{
		cout<<"invalid data\n";
		return;
	}

	if(h==12)h=0;
	if(m==60)m=0;

	int hourAngle = 0.5*(h*60+m);
	int minuteAngle = 6 * (m);

	int angle = abs(hourAngle-minuteAngle);

	cout<<"Angle ::"<<min(360-angle,angle);
}
int main()
{
	int h,m;
	cout<<"enter the time (h/m)";
	cin>>h>>m;

	findAngle(h,m);
}
