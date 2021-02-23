#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a,d,count=1;
    char c[100000],s[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c[i]>>s[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(c[i]!=c[i+1])
        {
            count++;
        }
    }
    cout<<count;

}
