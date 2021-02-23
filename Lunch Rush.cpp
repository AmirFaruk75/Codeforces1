#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,c=0,k;
    cin>>n>>k;
    long long int a[n+1],b[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0; i<n; i++)
    {
        if(b[i]>k)
        {
            a[i]=a[i]-(b[i]-k);
        }
    }
     sort(a,a+n);
     cout<<a[n-1]<<endl;


}
