#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,x,y,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x>=y)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(x==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(x==2)
        {
            if(y==3)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        if(x==3)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;

    }
}
