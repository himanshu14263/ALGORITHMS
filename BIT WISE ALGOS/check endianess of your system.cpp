// PROBLEM :: CHECK ENDIANESS OF YOUR SYSTEM

#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int i = 1;
	char * ch = (char*)&i;

	if(*ch)
		cout<<"little endian\n";
	else
		cout<<"big endian\n";
}
