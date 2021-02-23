#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b,c,sum=3,i,j;
    cin>>a>>b>>c;
    for(i=0;;i++)
    {
        if(a==0 || b==1 || c==2)
        {
            break;
        }
        else{
            sum=sum+3;
            a--;
            b--;
            c--;
        }
    }
    cout<<sum;
}
