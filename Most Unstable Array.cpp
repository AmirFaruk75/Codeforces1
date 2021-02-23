#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        if(n==1)
        {
            cout<<0<<endl;
        }
        else if(n==2)
        {
            cout<<m<<endl;
        }
        else{
            cout<<m*2<<endl;
        }
    }
}
