#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,i,j,n,a,c,b,d,e,f,g,h;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                cout<<1;
                if(s[i]=='1')
                {
                    b=2;
                }
                else{
                    b=1;
                }
            }
            else{
                if(s[i]=='1')
                {
                    d=2;
                    if(b==d)
                    {
                        cout<<0;
                        b=1;
                    }
                    else{
                        cout<<1;
                        b=2;
                    }
                }
                else{
                    d=1;
                    if(b==d)
                    {
                        cout<<0;
                        b=0;
                    }
                    else{
                        cout<<1;
                        b=1;
                    }
                }
            }
        }
        cout<<endl;
    }
}
