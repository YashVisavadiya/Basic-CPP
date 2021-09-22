#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[6] = {100,50,10,5,2,1};
	
	int n,m,sum = 0;
	cin>>n;
		
	m = n;
		
	for(int i = 0; i < 6; i++)
	{
		n = m / a[i];
		m = m % a[i];
		sum += n;
		//cout<<n<<endl;
	}
	cout<<sum<<endl;

	return 0;
}
