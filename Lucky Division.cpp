#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,a,b=0,c,d,e,f,g,h;
    cin>>n;
    a=n;
    for(i=0;i<a;i++)
    {
        if(n<1)
        {
            break;
        }
        if(n%10==4 || n%10==7)
        {
            n=n/10;
        }
        else{
            b=1;
            break;
        }
    }

    if(b==0)
    {
        cout<<"YES";
    }
    else{
        if(a%4==0 || a%7==0 || a%44==0 || a%47==0 || a%74==0 || a%77==0 || a%444==0 || a%447==0 || a%474==0 || a%477==0)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}
