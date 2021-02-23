#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int l,r,d,q;
    cin>>q;
    while(q--)
    {
        cin>>l>>r>>d;
        if(d<l)
        {
            cout<<d<<endl;
        }
        else if(d>r)
        {
            cout<<d<<endl;
        }
        else{
            int a=(r/d)+1;
            cout<<d*a<<endl;
        }
    }
}
