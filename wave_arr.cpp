/**   author akash kumar template  **/


#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(int n,int a[])
{
	for(int i=0;i<n-1;)
	{
	    if(a[i]<=a[i+1])
	    {
		int temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	    }
	    i+=2;
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
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;++i)
       {
	   cin>>a[i];
       }
       solve(n,a);
       cout<<endl;
   }
   return 0;
}
