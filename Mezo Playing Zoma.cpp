#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a=0,b=0,c,d,e,f,g,h;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            a++;
        }
        else{
            b++;
        }
    }
    cout<<a+b+1;
}
