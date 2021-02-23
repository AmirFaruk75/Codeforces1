#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[200005],b=1,c,d,e,f,g,h,j,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                b++;
            }
        }
        if(b==n)
        {
            cout<<n<<endl;
        }
        else{
            cout<<1<<endl;
        }
        b=1;
    }
}
