#include<bits/stdc++.h>
using namespace std;
int power(int x, unsigned int y, int p)
{
    int res=1;
    if(x%p==0)
        return 0;
        while(y>0)
        {
            if(y%2!=0)
            {
                res=(res*x)%p;
            }
            else{
                y=y/2;
                x=(x*x)%p;
            }
        }
        return res;

}
int main()
{
    int x,y,p;
    cin>>x>>y>>p;
    cout<<power(x,y,p);
}
