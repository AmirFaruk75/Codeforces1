#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,k,a[100000],i,j,b=0,c=0,d,e,f,g,h;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
        {
            b++;
        }
        else{
            break;
        }
    }
    if(b==n)
    {
        cout<<n;
        return 0;
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]<=k)
        {
            b++;
        }
        else{
            break;
        }
    }
    cout<<b;
}
