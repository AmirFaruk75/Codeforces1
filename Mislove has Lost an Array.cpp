#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,l,r,i,j,a[100000],b,c=1,d[100000],e,f=1,g,h,sum=0,cum=0;
    cin>>n>>l>>r;
    b=n-l;
    for(i=0;i<b;i++)
    {
        a[i]=1;
    }
    a[b]=c;
    for(i=b+1;i<n;i++)
    {
        c=c*2;
        a[i]=c;
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    for(i=0;i<r;i++)
    {
        d[i]=f;
        f=f*2;
    }
    for(i=r;i<n;i++)
    {
        d[i]=d[r-1];
    }
    for(i=0;i<n;i++)
    {
        cum=cum+d[i];
    }
    cout<<sum<<" "<<cum;
}
