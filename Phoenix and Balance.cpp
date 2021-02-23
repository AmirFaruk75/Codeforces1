#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a,b=0,c,d,e=0,f,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n==2)
        {
            cout<<2<<endl;
            continue;
        }
        else if(n==4)
        {
            cout<<6<<endl;
            continue;
        }
        else{
            a=n/2;
            for(j=1;j<a;j++)
            {
                b=b+pow(2,j);
            }
            c=pow(2,n);
            d=b+c;
            for(k=a;k<n;k++)
            {
                e=e+pow(2,k);
            }
        }
        f=d-e;
        cout<<f<<endl;
        e=0;
        b=0;

    }
}
