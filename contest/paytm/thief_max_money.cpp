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
   int a[n];
   int s1=0;
   int s2=0;
   for(int i=0;i<n;++i)
   {
   	cin>>a[i];
   }
   for(int i=0;i<n;++i)
   {
   	if(i%2==0)
   	{
   		s1+=a[i];
   	}
   	else
   	{
   		s2+=a[i];
   	}
   }
   cout<<max(s1,s2);
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
