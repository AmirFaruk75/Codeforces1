#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a,b=0,c=0,d=0,e=0,f,g,h,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=sqrt(n);
        for(i=2;i<=a;i++)
        {
            if(n%i==0 && d==0)
            {
                b=i;
                d=1;
                continue;
            }
            if(n%i==0 && e==0)
            {
                c=i;
                if(n%(b*c)==0)
                {
                    break;
                }
                else{
                    c=0;
                    e=0;
                }
            }
        }

        if(b==0 || c==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            g=b*c;
            if(n%g!=0)
            {
                cout<<"NO"<<endl;
            }
            else{
                f=n/(b*c);
                if(f==b || f==c)
                {
                    cout<<"NO"<<endl;
                }
                else{
                        cout<<"YES"<<endl;
                    cout<<b<<" "<<c<<" "<<f<<endl;
                }
            }
        }
        b=0;c=0;d=0;e=0;
    }
}
