#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int q,c,m,x,i,j,a=0,b,d,e,f,g,h;
    cin>>q;
    for(j=0;j<q;j++)
    {
        cin>>c>>m>>x;
        if(x>=c)
        {
            if(c<=m)
            {
                cout<<c<<endl;
            }
            else{
                cout<<m<<endl;
            }
        }
        else if(x>=m)
        {
            if(c<=m)
            {
                cout<<c<<endl;
            }
            else{
                cout<<m<<endl;
            }
        }
        else if(c>=x && m>=x)
        {
            b=c-x;
            d=m-x;
            if(b>=d)
            {
                e=b/2;
                if(d<e)
                {
                    cout<<x+d<<endl;
                }
                else{
                    f=d-e;
                    g=b%2;
                    h=f+g;
                    int k=h/3;
                    cout<<e+k+x<<endl;
                }
            }
            else{
                e=d/2;
                if(b<e)
                {
                    cout<<x+b<<endl;
                }
                else{
                    f=b-e;
                    g=d%2;
                    h=f+g;
                    int k=h/3;
                    cout<<e+k+x<<endl;
                }
            }
        }
    }
}
