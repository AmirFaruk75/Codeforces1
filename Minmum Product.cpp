#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int t,a,b,x,y,c,d,e,f,g,h,i,j,k,l,m,n,q,w;
    cin>>t;
    while(t--)
    {
        e=1000000000000000001;f=1000000000000000001;g=1000000000000000001;h=1000000000000000001;
        cin>>a>>b>>x>>y>>n;
        x=a-x;
        y=b-y;
        if(x>=n && y>=n)
        {
            c=(a-n)*b;
            d=(b-n)*a;
            e=min(c,d);
        }
        if(x>=n && y<n)
        {
            j=(a-n)*b;
            i=(b-y)*(a-(n-y));
            f=min(i,j);
        }
        if(x<n && y>=n)
        {
            q=(b-n)*a;
            w=(a-x)*(b-(n-x));
            g=min(q,w);
        }
        if(x<n && y<n)
        {
            if(x>=y)
            {
                int u,o;
                u=a-x;
                n=n-x;
                if(n>=y)
                {
                    o=b-y;
                }
                else{
                    o=b-n;
                }
                int p,r;
                p=b-y;
                n=n-y;
                if(n>=x)
                {
                    r=a-x;
                }
                else{
                    r=a-n;
                }
                h=min((u*o),(p*r));
            }
            else{
                int o,u;
                u=b-y;
                n=n-y;
                if(n>=x)
                {
                    o=a-x;
                }
                else{
                    o=a-n;
                }
                int p,r;
                p=a-x;
                n=n-x;
                if(n>=y)
                {
                    r=b-y;
                }
                else{
                    r=b-n;
                }
                h=min((u*o),(p*r));
            }
        }
        m=min(e,f);
        k=min(g,m);
        l=min(k,h);
        cout<<l<<endl;
    }
}
