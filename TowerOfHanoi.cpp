/* author : @akash kumar */

#include<iostream>
using namespace std;

int hanoi(int n,int s,int a,int d)
{
    if(n==1)
    {
        cout<<"Move Disk "<<n<<" from "<<s<<" to "<<d<<endl;
        return 1;
    }
    int a1=hanoi(n-1,s,d,a);
    cout<<"Move Disk "<<n<<" from "<<s<<" to "<<d<<endl;
    int a2=hanoi(n-1,a,s,d);
    return a1+a2+1;
    //return pow(n,n)-1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<hanoi(n,1,3,2)<<endl;
    }
}
