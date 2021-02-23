#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t,x,y,a,b,c,d,e,f,g,h,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y;
        if(y>=x)
        {
            cout<<"NO"<<endl;
        }
        else{
            a=x-y;
            if(a%2==0 || a%3==0 || a%5==0 || a%7==0 || a%11==0 || a%37==0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
