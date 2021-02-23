#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2;
        }
        else{
            cout<<(n/2)+1;
        }
    }
}
