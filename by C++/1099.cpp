
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;

    int x,y;
    while(t--)
    {
        cin>>x>>y;

        if(x==y){

            cout<< "0"<<endl;
        }

        else if(x<y){

            int sum=0;
            for(int i=x+1; i<y; i++)
            {
                if(i%2 != 0){
                sum+=i;
                }
            }
              cout<<sum<<endl;
        }

        else{


            int sum=0;
            for(int i=y+1; i<x; i++){

                if(i%2 != 0){

                    sum+=i;
                }
            }
              cout<<sum<<endl;
        }



    }







    return 0;
}
