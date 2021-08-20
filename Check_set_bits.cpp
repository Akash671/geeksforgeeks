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
   int n;
   cin>>n;
   if(n==0)
   {
   	cout<<0;
   }
   else
   {
   	for(int i=1;i<=n;++i)
   	{
   		int p=pow(2,i);
   		p=p-1;
   		if(p==n)
   		{
   			cout<<1;
   			break;
   		}
   		if(p>=n)
   		{
   		    cout<<0;
   			break;
   		}
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
