#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a=0,b,c,e,f,g,h;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i=i+2)
    {
        if(s[i]=='a' && s[i+1]=='a')
        {
            s[i+1]=s[i+1]+1;
            a++;
        }
        else if(s[i]=='b' && s[i+1]=='b')
        {
            s[i]=s[i]-1;
            a++;
        }
    }
    cout<<a<<endl;
    cout<<s;
}
