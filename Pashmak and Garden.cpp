#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,a=0;
    cin>>x1>>y1>>x2>>y2;
    if(x1+y1==x2+y2)
    {
        a=1;
    }
    else if(x1+y1<x2+y2)
    {
        if(x1==x2 && y1!=y2)
        {
            a=1;
        }
        else if(y1==y2 && x1!=x2)
        {
            a=1;
        }
        else if(x2-x1==y2-y1)
        {
            a=1;
        }
        else{
            cout<<-1;
            return 0;
        }
    }
    else if(x1+y1>x2+y2)
    {
        if(x2==x1 && y2!=y1)
        {
            a=1;
        }
        else if(y2==y1 && x2!=x1)
        {
            a=1;
        }
        else if(x1-x2==y1-y2)
        {
            a=1;
        }
        else{
            cout<<-1;
            return 0;
        }
    }
    if(x1+y1==x2+y2)
    {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        return 0;
    }
    else if(x1+y1<x2+y2)
    {
        if(x1==x2 && y1!=y2)
        {
            cout<<(y2-y1)<<" "<<y1<<" "<<y2-y1<<" "<<y2;
            return 0;
        }
        else if(x1!=x2 && y1==y2)
        {
            if(y1<0)
            {
                cout<<x1<<" "<<(-(y1))<<" "<<x2<<" "<<(-(y1));
                return 0;
            }
            cout<<y2<<" "<<x2<<" "<<x2<<" "<<x2;
            return 0;
        }
        else if(x1!=x2 && y1!=y2)
        {
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
            return 0;
        }
    }
    else if(x1+y1>x2+y2)
    {
        if(x1==x2 && y1!=y2)
        {
            cout<<y2<<" "<<x2<<" "<<y2<<" "<<y2;
            return 0;
        }
        else if(x1!=x2 && y1==y2)
        {
            cout<<y2<<" "<<x2<<" "<<x2<<" "<<x2;
            return 0;
        }
        else if(x1!=x2 && y1!=y2)
        {
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
            return 0;
        }
    }
}
