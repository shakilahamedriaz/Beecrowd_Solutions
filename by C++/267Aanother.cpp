#include<bits/stdc++.h>
using namespace std;

int main(){

int t; cin>>t;
while(t--)
{


    long a=0,b=0;
    cin>>a>>b;

    long total=0;

    while(a>0 && b>0){

       if(a > b){total += a/b; a -= (a/b) * b;}

            else{total += b/a; b -= (b/a) * a;}
        }

        cout<<total<<endl;
    }


return 0;
}
