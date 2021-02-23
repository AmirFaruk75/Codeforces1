#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,x,a[100000],i,j,b=0,c,d=0,e,f,g,h,sum=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>x;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        for(j=0;j<n;j++)
        {
            if(a[j]>=x)
            {
                break;
            }
            else{
                b++;
            }
        }
        for(j=b;j<n;j++)
        {
            sum=sum+(a[j]-x);
        }
        for(j=b-1;j>=0;j--)
        {
            c=x-a[j];
            sum=sum-c;
            if(sum==0)
            {
                d++;
                break;
            }
            else if(sum<0)
            {
                break;
            }
            d++;
        }
        cout<<((n-b)+d)<<endl;
        d=0;b=0;sum=0;
    }
}
