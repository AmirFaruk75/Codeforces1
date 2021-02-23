#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,b,c,d=0,e,f,g,h,i,j;
    cin>>n;
    if(n==1)
    {
        cout<<3;
        return 0;
    }
    if(n%2!=0)
    {
        cout<<1;
    }
    else{
        for(i=1;;i++)
        {
            a=(n*i)+1;
            b=sqrt(a);
            for(j=2;j<=b;j++)
            {
                if(a%j==0)
                {
                    c=i;
                    d=1;
                    break;
                }
            }
            if(d==1)
            {
                break;
            }
        }
        cout<<c;
    }
}
