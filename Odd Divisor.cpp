#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,a,b=0,c=0,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else if(n==2)
        {
            cout<<"NO"<<endl;
        }
        else{
             for(i=0;;i++)
             {
                 a=n/2;
                 n=a;
                 if(n%2!=0)
                 {
                     b=1;
                     break;
                 }
                 if(n==2)
                 {
                     c=1;
                     break;
                 }
             }
             if(b==1)
             {
                 cout<<"YES"<<endl;
             }
             else if(c==1){
                cout<<"NO"<<endl;
             }
        }
        b=0;c=0;
    }
}
