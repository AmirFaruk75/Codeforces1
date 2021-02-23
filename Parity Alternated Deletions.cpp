#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],b=0,c=0,d,e,f,g,h,i,j,k,l[100000],sum=0,cum=0,m[100000];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            b++;
        }
        else{
            c++;
        }
    }
    if((b-c)==0 || (b-c)==-1 || (b-c)==1)
    {
        cout<<0;
        return 0;
    }
    sort(a+1,a+1+n);
    if(b==0 || c==0)
    {
        for(i=1;i<=n-1;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum;
        return 0;
    }
    if(b>c)
    {
        d=(2*c)+1;
        e=n-d;
        for(i=1;i<=n;i++)
        {
            if(a[i]%2!=0)
            {
                sum=sum+a[i];
                e--;
            }
            if(e==0)
            {
                cout<<sum;
                return 0;
            }
        }
    }
    if(b<c)
    {
        d=(2*b)+1;
        e=n-d;
        for(i=1;i<=n;i++)
        {
            if(a[i]%2==0)
            {
                sum=sum+a[i];
                e--;
            }
            if(e==0)
            {
                cout<<sum;
                return 0;
            }
        }
    }
}
