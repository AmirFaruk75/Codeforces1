    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;


    int main(){
        ll int t,a,b,x,y,n;
        cin>>t;
        while(t--){
            cin>>a>>b>>x>>y>>n;
            int l=max(a-n,x);
            int r=max(b-n,y);
            if(l<r){
                int s=n-(a-l);
            b=b-s;
                if(b<y){
                    b=y;
                }
                cout<<(b*l)<<endl;

            }else
            {
                int s=n-(b-r);
                a-=s;
                if(a<x){
                    a=x;
                }
                cout<<(a*r)<<endl;
            }


        }



    return 0;
    }
