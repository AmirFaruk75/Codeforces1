#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,c=0,d,e,f,g,h;
    string a,b;
    cin>>t;
    for(h=0;h<t;h++)
    {
        cin>>n;
        cin>>a>>b;
        for(i=1;i<n;i++)
        {
            if(a[n-i]!=b[n-i])
            {
                c=c+3;
            }
        }
        if(a[0]!=b[0])
        {
            c++;
        }
        cout<<c<<" ";
        for(i=1;i<n;i++)
        {
            if(a[n-i]!=b[n-i])
            {
                cout<<(n-i)+1<<" "<<1<<" "<<(n-i)+1<<" ";
            }
        }
        if(a[0]!=b[0])
        {
            cout<<1;
        }
        cout<<endl;
        c=0;
    }
}
