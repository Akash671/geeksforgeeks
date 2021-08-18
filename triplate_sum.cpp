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
   int x;
   cin>>n>>x;
   int a[n];
   int c=0;
   for(int i=0;i<n;++i)
   {
   	cin>>a[i];
   }
   for(int i=0;i<n-2;++i)
   {
   	for(int j=i+1;j<n-1;++j)
   	{
   		for(int k=j+1;k<n;++k)
   		{
   			if(a[i]+a[j]+a[k]==x)
   			{
   				c++;
   			}
   		}
   	}
   }
   cout<<c;
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

// time complexity of this algorithm is : T(n)=O(n^3)
