#include<bits/stdc++.h>
using namespace std;
map<string,int> mark;
int main()
{
    string s;
    cin>>s;
    mark[s]=1;
    cout<<mark[s]<<"\n";
    mark.clear();
    cout<<mark["amir"];
}
