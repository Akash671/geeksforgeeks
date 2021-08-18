/* author : @akash */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double



void solve()
{
  int n,d;
  cin>>n>>d;
  int a[n];
  for(int i=0;i<n;++i)
  {
  	cin>>a[i];
  }
  for(int i=0;i<d;++i)
  {
  	int tmp=a[0];
  	for(int j=1;j<n;++j)
  	{
  		a[j-1]=a[j];
  	}
  	a[n-1]=tmp;
  }
  for(int i=0;i<n;++i)
  {
  	cout<<a[i]<<" ";
  }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
            solve();
            cout<<"\n";	    
	}
	return 0;
}

// time complexity of this algorithm is : T(n)=O(n*d)
