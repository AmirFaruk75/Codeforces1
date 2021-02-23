#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a,b,c,d,e,f,g,h;
    cin>>n;
    if(n==1)
    {
        cout<<-1;
    }
    else if(n%2==0)
    {
        for(i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
    }
    else if(n%2!=0)
    {
        for(i=1;i<n;i++)
        {
            cout<<i+1<<" ";
        }
        cout<<1;
    }
}
