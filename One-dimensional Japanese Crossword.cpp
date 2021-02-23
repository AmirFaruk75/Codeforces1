#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a=0,b=0,c=0,d=0,e,f,g,h;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='B' && a==0)
        {
            b++;
            a=1;
        }
        else if(s[i]=='W')
        {
            a=0;
        }
    }
    cout<<b<<endl;
    for(i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            c++;
            if(i==n-1)
            {
                cout<<c<<" ";
            }
        }
        else{
            if(c>0)
            {
                cout<<c<<" ";
            }
            c=0;
        }
    }
}
