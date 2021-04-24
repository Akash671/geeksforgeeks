/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

int solve(int n,int a[],int m,int b[],int k)
{
    /* logic here */
    vector<int>v;
    for(int i=0;i<n;++i)
    {
        v.push_back(a[i]);
    }
    for(int i=0;i<m;++i)
    {
        v.push_back(b[i]);
    }
    sort(v.begin(),v.end());
    return v[k-1];
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
        int m;
        cin>>m;
        int b[m];
        for(int i=0;i<m;++i)
        {
            cin>>b[i];
        }
        int k;
        cin>>k;
        cout<<solve(n,a,m,b,k)<<"\n";
    }
    return 0;
}
