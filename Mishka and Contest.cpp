#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[10000],i,j,b=0,count=0,d;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        if(n<=k)
        {
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]<=k)
            {
                count++;
            }
            if(a[n-(i+1)]<=k)
            {
                count++;
            }

        }
    }
}
