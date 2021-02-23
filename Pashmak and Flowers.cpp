#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,b[1000000],i,j,a,c,d=0,e=0,f,g,h,sum=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(b,b+n);
    cout<<b[n-1]-b[0]<<" ";

    a=b[0];
    c=b[n-1];

    for(i=0;i<n;i++)
    {
        if(b[i]==a)
        {
           d++;
        }
        else if(b[i]==c)
        {
            e++;
        }
    }
    f=e*d;
    if(f==0)
    {
       for(i=n-1;i>=1;i--)
       {
           sum=sum+i;
       }
       cout<<sum;
    }
    else{
        cout<<f;
    }
}
