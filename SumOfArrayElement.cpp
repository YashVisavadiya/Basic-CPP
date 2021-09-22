#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	int k,count=0;
	cin>>k;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i != j)
			{
				if(arr[i] + arr[j] == k)	
				{
					count++;
				}
			}
		}
	}
	
	if(count > 0)
		cout<<"yes";
	
	if(count == 0)
			cout<<"no";
	
	return 0;
}
