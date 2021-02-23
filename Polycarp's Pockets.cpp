#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],i,j,b=0,c=0,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>100)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b++;
                a[j]=a[j]+100;
            }
        }
        if(b>c)
        {
            c=b;
            b=0;
        }
    }
    cout<<c;
}
