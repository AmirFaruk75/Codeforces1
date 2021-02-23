#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,k,i,j,b=0,c,d,e,f,g,h;
    cin>>n>>k;
    int primes[n+1];
    for(i=0;i<=n;i++)
    {
        primes[i]=1;
    }
    primes[0]=0;primes[1]=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(primes[i]==1)
        {
            for(j=2;i*j<=n;j++)
            {
                primes[i*j]=0;
            }
        }
    }
    for(i=13;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(primes[j]==1)
            {
                if(i==j)
                {
                    b++;
                    break;
                }
            }
        }
    }

}
