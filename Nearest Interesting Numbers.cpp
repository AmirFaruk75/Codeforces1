#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,j,b,c,d,e,f,g,h,n,sum=0;
    cin>>a;
    b=a;
    for(i=0;i<5;i++)
    {
        if(a<10)
        {
            sum=sum+(a%10);
            if(sum%4==0)
            {
                cout<<b;
                return 0;
            }
            else{
                a=b+1;
                b=a;
                i=0;
                sum=0;
            }
        }
        else{
            sum=sum+(a%10);
            a=a/10;
        }
    }
}
