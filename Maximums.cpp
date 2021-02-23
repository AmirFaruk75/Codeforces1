#include<bits/stdc++.h>
using namespace std;
long long int n,b[200005],a[200005],c,d,e,f,g,h,x[200005],sum=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            x[i]=0;
        }
        else{
            sum=sum+b[i-1];
            x[i]=sum;
            if(x[i]<x[i-1])
            {
                x[i]=x[i-1];
                sum=x[i-1];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]+x[i]<<" ";
    }
}
