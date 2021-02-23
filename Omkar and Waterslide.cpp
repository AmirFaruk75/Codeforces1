#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[200005],b,c,d=0,e=0,f,g,h,i,j,v,s,p,ans=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        i=2;
        while(i<=n)
        {
            if(a[i]<a[i-1])
            {
                j=i;
                v=a[i-1];
                while(j<=n)
                {
                    if(a[j]>=v)break;
                    s=v-a[j];
                    p=v-a[j-1];
                    if(s>p) ans+=s-p;
                    j++;
                    i++;
                }

            }
            else{
                i++;
            }
        }
        cout<<ans<<endl;
        ans=0;
    }
}
