#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=n/2020;
        b=n%2020;
        if(a>=b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
