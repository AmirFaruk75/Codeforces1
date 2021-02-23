#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,i,j,a,b=0,c,d,e,f,g,h;
    cin>>n>>m;
    a=n+1;
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            b++;
        }
        if(i==a/2)
        {
            if(b==2)
            {
                n=a;
            }
            else{
                a=a+1;
            }
        }
    }
    cout<<n;
}
