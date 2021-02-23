#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[100000],i,j,b=0,c,d,e,f,g,h;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        for(i=n;i>=1;i--)
        {
            if(i>=a[i])
            {
                b=i;
                break;
            }
            else{
                continue;
            }
        }
        cout<<b+1<<endl;
        b=0;
    }
}
