#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a,b,c,d,e,f,g,h;
    string s;
    cin>>n;
    cin>>s;
    if(n%3==0)
    {
        for(i=0;i<n-3;i++)
        {
            cout<<s[i]<<s[i+1]<<s[i+2]<<"-";

            i=i+2;
        }
        cout<<s[n-3]<<s[n-2]<<s[n-1];
    }
    else if(n%2==0)
    {
        for(i=0;i<n-2;i++)
        {
            cout<<s[i]<<s[i+1]<<"-";
            i=i+1;
        }
        cout<<s[n-2]<<s[n-1];
    }
    else{
        for(i=0;i<n-3;i++)
        {
            cout<<s[i]<<s[i+1]<<"-";
            i=i+1;
        }
        cout<<s[n-3]<<s[n-2]<<s[n-1];
    }
}
