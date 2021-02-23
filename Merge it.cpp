#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[100000],b=0,c=0,d=0,e,f,i,j;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%3==0)
            {
                b++;
            }
            else if(a[i]%3==1)
            {
                c++;
            }
            else{
                d++;
            }
        }
        if(c==d)
        {
            cout<<b+c<<endl;
        }
        else if(c<d)
        {
            d=d-c;
            e=d/3;
            cout<<b+c+e<<endl;
        }
        else{
            c=c-d;
            e=c/3;
            cout<<b+d+e<<endl;
        }
        b=0;c=0;d=0;
    }
}
