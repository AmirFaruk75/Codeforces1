#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a,b,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<i<<endl;
        }
        else if(i==1)
        {
            cout<<i-1<<" "<<i<<" "<<i-1<<endl;
        }
        else if(i==2)
        {
            cout<<i-2<<" "<<i-1<<" "<<i<<" "<<i-1<<" "<<i-2<<endl;
        }
    }
}
