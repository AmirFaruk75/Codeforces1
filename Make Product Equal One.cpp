#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],i,j,b=0,c=0,d=0,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            b++;
        }
        else if(a[i]==0)
        {
            d++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            c=c+(-1-a[i]);
        }
        else if(a[i]>0)
        {
            c=c+(a[i]-1);
        }
        else if(a[i]==0)
        {
            c=c+1;
        }
    }
    if(b%2!=0)
    {
        if(d==0)
        {
            cout<<c+2;
        }
        else{
            cout<<c;
        }
    }
    else{
        cout<<c;
    }
}
