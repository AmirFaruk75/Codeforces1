#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a,b=1,c,d,e,f,g,h;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            a=sqrt(n);
            for(i=2;i<=a;i++)
            {
                if(n%i==0)
                {
                    b=i;
                    break;
                }
            }
            if(b==1)
            {
                cout<<b<<" "<<n-b<<endl;
            }
            else{
                c=n/b;
                d=n-c;
                if(d%c==0)
                {
                    cout<<c<<" "<<d<<endl;
                }
                else{
                    cout<<b<<" "<<n-b<<endl;
                }
            }
        }
        b=1;
    }
}
