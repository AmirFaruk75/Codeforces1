#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],pa[100000],b,c,d,e,f,g,h,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pa[0]=a[0];
    for(i=1;i<n;i++)
    {
        pa[i]=pa[i-1]+a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<pa[i]<<" ";
    }
}
