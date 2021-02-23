#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int i,j,n,m,a,b;
    string s,t;
    cin>>s>>t;
    a=s.length();
    b=t.length();
    if(s==t)
    {
        cout<<-1;
    }
    else{
        if(a>=b)
        {
            cout<<a;
        }
        else{
            cout<<b;
        }
    }
}
