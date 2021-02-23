#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,i,j,a,c,b,d,e,f,g,h;
    cin>>n>>m;
    if(n>26)
    {
        cout<<m;
    }
    else
    {
        a=pow(2,n);
        cout<<m%a;
    }
}
