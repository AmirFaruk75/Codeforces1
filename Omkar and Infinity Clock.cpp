#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[200005],k,b[200005],c=0,d[200005],e[200005],f[200005],g,h,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            d[i]=b[n-1]-a[i];
            e[i]=d[i];
        }
        sort(e,e+n);
        for(i=0;i<n;i++)
        {
            f[i]=e[n-1]-d[i];
        }
        if(k%2!=0)
        {
            for(i=0;i<n;i++)
            {
                cout<<d[i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(i=0;i<n;i++)
            {
                cout<<f[i]<<" ";
            }
            cout<<endl;
        }
    }
}
