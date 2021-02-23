#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[100000],b=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        c=c+a[i];
        if(c>0)
        {
            continue;
        }
        else if(c==0)
        {
            continue;
        }
        else
        {
            b=b+1;
            c=c+1;
        }

    }
    cout<<b;
}
