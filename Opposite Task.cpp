#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0)
        {
            cout<<0<<" "<<0<<endl;
        }
        else if(n%2==0)
        {
            cout<<(n/2)<<" "<<(n/2)<<endl;
        }
        else if(n%2!=0){
            cout<<n/2<<" "<<(n/2)+1<<endl;
        }
    }
}
