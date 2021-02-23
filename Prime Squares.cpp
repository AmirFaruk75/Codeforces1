#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j || i==j-1)
                {
                    cout<<1<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
        for(i=0;i<n;i++)
        {
            if(i==0 || i==n-1)
            {
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}
