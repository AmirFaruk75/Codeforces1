#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,a[200005],b=0,c=0,d=0,e,f,g,h,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            b=b+a[i];
        }
        else{
            c=c+a[i];
        }
    }
    if(c>0)
    {
        cout<<2<<" ";
        c=c-2;
        d++;
    }
    if(b>0)
    {
        cout<<1<<" ";
        b=b-1;
        d++;
    }
    for(i=d;i<n;i++)
    {
        if(c>0)
        {
            cout<<2<<" ";
            c=c-2;
        }
        else{
            cout<<1<<" ";
        }
    }
}
