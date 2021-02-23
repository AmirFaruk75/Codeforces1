#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,a,b,d,e,f,g,h;
    char c,w='0';
    cin>>n>>t;
    if(n==1 && t==10)
    {
        cout<<-1;
        return 0;
    }
    if(t==1)
    {
        c='1';
        for(i=0;i<n;i++)
        {
            cout<<c;
        }
    }
    else if(t==2)
    {
        c='2';
        for(i=0;i<n;i++)
        {
            cout<<c;
        }
    }
     else if(t==3)
    {
        c='3';
        for(i=0;i<n;i++)
        {
            cout<<c;
        }
    }
     else if(t==4)
    {
        c='4';
        for(i=0;i<n;i++)
        {
            cout<<c;
        }
    }
     else if(t==5)
    {
        c='5';
        for(i=0;i<n;i++)
        {
            cout<<c;
        }
    }
     else if(t==6)
    {
        c='6';
        for(i=0;i<n;i++)
        {
            cout<<c;
        }
    }
     else if(t==7)
    {
        c='7';
        for(i=0;i<n;i++)
        {
            cout<<c;
        }
    }
     else if(t==8)
    {
        c='8';
        for(i=0;i<n;i++)
        {
            cout<<c;
        }
    }
     else if(t==8)
    {
        c='8';
        for(i=0;i<n;i++)
        {
            cout<<c;
        }
    }
     else if(t==9)
    {
        c='9';
        for(i=0;i<n;i++)
        {
            cout<<c;
        }
    }
    else if(t==10)
    {
        c='1';
        {
            for(i=0;i<n-1;i++)
            {
                cout<<c;
            }
            cout<<w;
        }
    }
}
