#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{

    long t;
    cin>>t;

    while(t--)
    {
        long n; cin>>n;
        long long ans(0);

        long long pow(1);

        for(long p = 9; p > 0; p--){

            if(p > n){continue;}

            ans+=pow*p;
            pow*=10;

            n-=p;
        }

        cout<<ans<<endl;
    }





    return 0;
}
