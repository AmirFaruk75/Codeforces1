#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,b,c,d,e,f,g,h,i,j;
    cin>>n;
    a=n/1000;
    b=a*1000;
    c=n-b;
    d=1000-c;
    if(n<1000)
    {
        cout<<1000-n<<endl;
        return 0;
    }
    if(c>=d)
    {
        cout<<d<<endl;
    }
    else{
        cout<<c<<endl;
    }
}
