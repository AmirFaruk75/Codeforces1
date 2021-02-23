#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int i,n,a,b=0,c,d,e,f,g,h;
    string s;
    cin>>s;
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
        {
            i=i+2;
        }
        else if(s[i]=='1' && s[i+1]=='4')
        {
            i=i+1;
        }
        else if(s[i]=='1')
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
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
