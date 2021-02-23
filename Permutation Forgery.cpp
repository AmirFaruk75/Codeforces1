#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[10000],i,j,b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=n-1;i>=0;i--)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
