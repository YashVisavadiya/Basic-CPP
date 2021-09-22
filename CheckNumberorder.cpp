#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a < b && b < c)
		cout<<"Incresing";
	else if(a > b && b > c)
		cout<<"Decresing";
	else
		cout<<"Neither increasing nor Decreasing";
		
	return 0;
}
