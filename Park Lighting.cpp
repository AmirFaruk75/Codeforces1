#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,a,c,b,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        a=n*m;
        if(a%2==0)
        {
            cout<<a/2<<endl;
        }
        else{
            cout<<(a/2)+1<<endl;
        }
    }
}
