#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	if(n%2==0)
	{
	for(int i=0;i<n;i+=2)
	{
			swap(a[i],a[i+1]);
	}
	}
	else
	{
		for(int i=0;i<n-1;i+=2)
		{
			swap(a[i],a[i+1]);
		}
	}
	for(int i=0;i<n;++i)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
