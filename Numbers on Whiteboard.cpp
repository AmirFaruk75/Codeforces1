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
        if(n==2)
        {
            cout<<2<<endl;
            cout<<2<<" "<<1<<endl;
            continue;
        }
        cout<<2<<endl;
        a=n;
        for(i=0;i<n-1;i++)
        {
            if(i==1)
            {
                cout<<a<<" "<<a<<endl;
            }
            else{
                cout<<a<<" "<<a-2<<endl;
                a=a-1;
            }
        }
    }
}
