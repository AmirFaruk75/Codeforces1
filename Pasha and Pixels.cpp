#include<bits/stdc++.h>
using namespace std;
struct pixel
{
    int a;
    int b;

};

struct pixel x[100000],temp;

bool comp(pixel A,pixel B){
 if ( A.a==B.a)  return A.b < B.b;
 else return A.a < B.a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t,i,j,c[200005],d,e=0,f,g,h,n,m,k;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        cin>>x[i].a>>x[i].b;

    }
    sort(x,x+n,comp);
    for(i=0;i<n;i++)
    {
        c[i]=x[i].a+x[i].b;
    }
    for(i=0;i<n-1;i++)
    {
        if(c[i]>10000)
        {
            d=c[i]-10000;
            if(d==c[i+1])
            {
                c[i+1]=c[i+1]+10000;
            }
        }
        else{
            if(c[i]==c[i+1])
            {
                c[i+1]=c[i+1]+10000;
            }
        }
    }
    sort(c,c+n);
    for(i=0;i<n;i++)
    {
        cout<<c[i]<<endl;
    }
}
