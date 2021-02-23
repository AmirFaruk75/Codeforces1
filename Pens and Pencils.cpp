#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,a,b,c,d,e,f,g,h,k,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d>>k;
        if(a%c!=0)
        {
            a=(a/c)+1;
        }
        else{
            a=a/c;
        }
        if(b%d!=0)
        {
            b=(b/d)+1;
        }
        else{
            b=b/d;
        }
        e=a+b;
        if(e>k)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }

    }
}
