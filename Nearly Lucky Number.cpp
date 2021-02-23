#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int i,n,a,b=0,d,e;
    string s;
    cin>>s;
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            b++;
        }
    }
    if(b==4 || b==7)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
