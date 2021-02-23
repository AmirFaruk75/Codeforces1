#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a=0,b,c,d,e,f,g,h,k;
    string s;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
           if(s[i]=='(')
           {
               for(j=i+1;j<n;j++)
               {
                   if(s[j]==')')
                   {
                       a=a+2;
                       s[j]=s[j]+1;
                       break;
                   }
               }
           }
        }
        b=n-a;
        cout<<b/2<<endl;
        a=0;
    }
}
