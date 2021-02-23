#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,sum=0,a,i;
    string s;
    cin>>s;
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(s[i]=='1')
        {
            sum=sum+1;
        }
        else if(s[i]=='2')
        {
            sum=sum+2;
        }
        else if(s[i]=='3')
        {
            sum=sum+3;
        }
         else if(s[i]=='4')
        {
            sum=sum+4;
        }
         else if(s[i]=='5')
        {
            sum=sum+5;
        }
         else if(s[i]=='6')
        {
            sum=sum+6;
        }
         else if(s[i]=='7')
        {
            sum=sum+7;
        }
         else if(s[i]=='8')
        {
            sum=sum+8;
        }

    }
    if(sum%9==0 && sum!=0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
