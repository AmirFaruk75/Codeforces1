#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n,i,j,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>=b)
        {
            n=b*2;
            if(n>=a)
            {
                cout<<n*n<<endl;
            }
            else{
                cout<<a*a<<endl;
            }
        }
        else{
            n=a*2;
            if(n>=b)
            {
                cout<<n*n<<endl;

            }
            else{
                cout<<b*b<<endl;
            }
        }
    }
}
