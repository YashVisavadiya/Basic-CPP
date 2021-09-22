#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k = 1;
	
	for(int i = 0; i < 5; i++)
	{
		k = i + 1;
		for(int j = 1; j <= 5; j++)
		{
			if(j == 1)
			{
				cout<<k<<" ";
			}
			if(j == 2 || j ==4)
			{
				k = k + (9 - (2*i) );
				cout<<k<<" ";
			}
			if(j == 3 || j == 5)
			{
				k = k + (1 + (2*i) );
				cout<<k<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
