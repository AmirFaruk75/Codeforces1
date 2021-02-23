#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,i,j,a,b,c=0,d,e,f,g,h;
    cin>>n>>x;
    if(x%n==0)
    {
        a=x/n;
        for(i=a;i<=n;i++)
        {
            if(x%i==0)
            {
                c++;
            }
        }
    }
    else{
        a=(x/n)+1;
        for(i=a;i<=n;i++)
        {
            if(x%i==0)
            {
                c++;
            }
        }
    }
    cout<<c;

}
