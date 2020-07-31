#include<iostream>
using namespace std;
int main()
{
	int n,k,count=0;
	cin >> n >> k;
	label:
	if(n%10==0)
	{
		n = n/10;
		count++;
		if(count<k)
		{
			goto label;
		}
	}
	else
	{
		n=n-1;
		count++;
		if(count < k)
		{
			goto label;
		}
	}
	cout<< n;
	
	return 0;
	
}
