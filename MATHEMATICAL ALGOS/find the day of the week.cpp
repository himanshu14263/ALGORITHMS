// PROBLEM :: FIND THE DAY OF THE YEAR FROM PAST OR FUTURE

#include<bits/stdc++.h>
using namespace std;

int findDayUtil(int d,int m,int y)
{
	int t [] = {0,3,2,5,0,3,5,1,4,6,2,4};

	y-=m<3;

	return (y+y/4-y/100+y/400+t[m-1]+d)%7;
}
void findDay(int d,int m,int y)
{
	switch(findDayUtil(d,m,y))
	{
	case 1:
		cout<<"MONDAY"<<endl;
		break;
	case 2 :
		cout<<"TUESDAY"<<endl;
		break;
	case 3 :
		cout<<"WEDNESDAY"<<endl;
		break;
	case 4 :
		cout<<"THURSDAY"<<endl;
		break;
	case 5 :
			cout<<"FRIDAY"<<endl;
			break;
	case 6 :
			cout<<"SATURDAY"<<endl;
			break;
	case 7 :
			cout<<"SUNDAY"<<endl;
			break;
	}

}
int main()
{
	int d,m,y;
	cout<<"enter the date ( dd/mm/yy)"<<endl;
	cin>>d>>m>>y;

	findDay(d,m,y);
}
