#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,k,i,j,a,b,c=0,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<(k*2)+n<<endl;
        }
        else{
            a=sqrt(n);
            for(j=1;j<=a;j++)
            {
                if(n%j==0)
                {
                    c++;
                }
                if(c==2)
                {
                    b=j;
                    break;
                }
                else{
                    b=n;
                }
            }
            cout<<(n+b)+(2*(k-1))<<endl;
            c=0;
        }
    }
}
