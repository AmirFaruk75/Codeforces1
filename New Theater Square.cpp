#include<bits/stdc++.h>
using namespace std;
char c[105][1005];
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,m,x,y,i,j,a,b=0,d=0,e,f,g,h,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n>>m>>x>>y;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>c[i][j];
            }
        }
        a=x*2;
        if(a<=y)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(c[i][j]=='.')
                    {
                        b=b+x;
                    }
                }
            }
        }
        else{
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(j+1<m and c[i][j]=='.' && c[i][j+1]=='.')
                    {
                        b=b+y;
                        j=j+1;
                    }
                    else if(c[i][j]='.')
                    {
                        b=b+x;
                    }
                }
            }
        }
        cout<<b<<endl;
        b=0;
    }

}
