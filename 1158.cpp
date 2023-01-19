#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,sum=0;
    cin>>n;

    while(n--){
            cin>>x>>y;

          if(x%2==0)x++;

        for(int i=0; i<y; i++){

                sum+=x;

                x+=2;


        }

        cout<<sum<<endl;


    sum=0;


    }






    return 0;
}
