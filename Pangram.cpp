#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a=0,b=0,c,d,e,f,g,h,i,j;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }

    if(n<26)
    {
        cout<<"NO";
    }
    else{
        sort(s.begin(),s.end());
        for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                a++;
            }
        }
        c=n-a;
        if(c==26)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}
