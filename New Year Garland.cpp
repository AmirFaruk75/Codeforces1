#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,a[100000],b,c,d,e,f,g,h,i,j;
    cin>>t;
    for(j=0;j<t;j++)
    {
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        if(a[2]-(a[0]+a[1])>1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
