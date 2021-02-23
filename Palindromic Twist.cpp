#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,a,b=0,c,d,e,f,g,h;
    string s,w;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(i=0;i<n/2;i++)
        {
            a=s[i]-s[(n-i)-1];
            if(a==0 || a==2 || a==-2)
            {
                continue;
            }
            else{
                b=1;
                break;
            }
        }
        if(b==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        b=0;
    }
}
