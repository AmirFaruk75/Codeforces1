#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,f[10000],i,j,a=1000,b,c,d,e,g,h;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>f[i];
    }
    sort(f,f+m);
    for(i=0;i<m;i++)
    {

        b=f[(n+i)-1]-f[i];
        if(b<0)
        {
            break;
        }

        if(b<a)
        {
            a=b;
        }
    }
    cout<<a;
}
