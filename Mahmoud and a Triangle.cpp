#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],i,j,b,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-2;i++)
    {
        if(a[i]+a[i+1]>a[i+2])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO";
}
