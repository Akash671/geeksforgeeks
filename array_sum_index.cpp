/* author : @akash */


/* 
problem is:-

*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double



void solve()
{
  int n,s;
  cin>>n>>s;
  int a[n];
  int flag=0;
  for(int i=0;i<n;++i)
  {
  	cin>>a[i];
  }

  for(int i=0;i<n-1;++i)
  {
  	int ans=a[i];
  	for(int j=i+1;j<n;++j)
  	{
  		ans+=a[j];
  		if(ans==s)
  		{
  			cout<<i<<" "<<j;
  			flag=1;
  			break;
  		}
  	}
  	if(flag)
  	{
  		break;
  	}
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

// time complexity of this algorithm is : T(n)=O()

