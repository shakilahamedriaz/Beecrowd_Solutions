#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    double ans=0.0;
    while(t--){
        int n,c;
        double a;
        cin>>n>>c;
        if(n==1001){

           a=1.50;
        }
        else if(n==1002){

            a=2.50;
        }
        else if(n==1003){

            a=3.50;
        }
        else if(n==1004){

            a=4.50;
        }
        else if(n==1005){

            a=5.50;
        }

        ans+=a*c;

    }


    cout<<fixed<<setprecision(2)<<ans<<endl;



    return 0;
}
