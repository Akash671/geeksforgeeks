/* author @akash kumar */

#include<bits/stdc++.h>
using namespace std;

int solve(int n,int s,int a[])
{
    int c=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]==s)
        {
            c++;
        }
    }
    return c;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int s;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        cout<<solve(n,s,a)<<"\n";
    }
}
