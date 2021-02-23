#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,k,a,b,c,d,e,f,g,h;
    cin>>n>>k;
    a=n*2;
    b=n*5;
    c=n*8;
    if(a%k!=0)
    {
        d=(a/k)+1;
    }
    else{
        d=a/k;
    }
    if(b%k!=0)
    {
        e=(b/k)+1;
    }
    else{
        e=b/k;
    }
    if(c%k!=0)
    {
        f=(c/k)+1;
    }
    else{
        f=c/k;
    }
    cout<<d+f+e;
}
