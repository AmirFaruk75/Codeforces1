#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,i,j,a,b=0,c=1,d,e,f,g,h;
    cin>>n>>m;
    a=n;
    for(i=1;;i++)
    {
        n=n+1;
        for(j=1;j<=n/2;j++)
        {
            if(n%j==0)
            {
                b++;
            }
        }
        if(b==1)
        {
            break;
        }
        else{
            c++;
        }
        b=0;
    }
    if(m==a+c)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

