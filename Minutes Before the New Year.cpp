#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,m,i,j,a,b,c,d,e,f,g;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>h>>m;
        a=24-h;
        b=a*60;
        c=b-m;
        cout<<c<<endl;
    }
}
