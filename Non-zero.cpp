#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[100000],i,j,b=0,c,d,e,f,g,h,sum=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]==0)
            {
                a[j]=a[j]+1;
                b++;
            }
        }
        for(j=0;j<n;j++)
        {
            sum=sum+a[j];
        }
        if(sum==0)
        {
            cout<<b+1<<endl;
        }
        else{
            cout<<b<<endl;
        }
        b=0;sum=0;
    }
}
