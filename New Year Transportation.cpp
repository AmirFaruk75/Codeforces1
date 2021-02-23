#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,t,a[1000000],i,j,b,c,d,e,f,g,h,sum=0;
    cin>>n>>t;
    for(i=1;i<=n-1;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n-1;)
    {
        i=i+a[i];
        if(i==t)
        {
            cout<<"YES";
            return 0;
        }
        else if(i<t)
        {
            continue;
        }
        else if(i>t)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"NO";
}
