#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],i,j,b=0,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[0] || a[i]==a[n-1])
        {
            b++;
        }
    }
    cout<<n-b;
}
