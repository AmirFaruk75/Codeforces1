#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a,b,c,d,e,f,g,h,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==4 || n==1 || n==2)
        {
            cout<<-1<<endl;
        }
        else{
            if(n%3==0)
            {
                cout<<n/3<<" "<<0<<" "<<0<<endl;
            }
            else if(n%5==0)
            {
                cout<<0<<" "<<n/5<<" "<<0<<endl;
            }
            else if(n%7==0)
            {
                cout<<0<<" "<<0<<" "<<n/7<<endl;
            }
            else{
                a=n/7;
                b=n%7;
                if(b==1)
                {
                    cout<<1<<" "<<1<<" "<<a-1<<endl;
                }
                else if(b==2)
                {
                    cout<<3<<" "<<0<<" "<<a-1<<endl;
                }
                else if(b==3)
                {
                    cout<<1<<" "<<0<<" "<<a<<endl;
                }
                else if(b==4)
                {
                    cout<<2<<" "<<1<<" "<<a-1<<endl;
                }
                else if(b==5)
                {
                    cout<<0<<" "<<1<<" "<<a<<endl;
                }
                else if(b==6)
                {
                    cout<<2<<" "<<0<<" "<<a<<endl;
                }
            }
        }
    }
}
