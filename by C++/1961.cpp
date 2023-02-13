#include<bits/stdc++.h>
using namespace std;

int main()
{


    int p,n,a;
    cin>>p>>n;
    int arr[150];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    for(int i=1; i<n; i++){

        if(arr[i]>arr[i-1]){

            a= (arr[i]-arr[i-1]);

        }else{

        a=arr[i-1]-arr[i];


        }

         if(a<=p){


            cnt=0;
         }else{

         cnt=1;
         break;
         }

    }

    if(cnt==0){

        cout<< "YOU WIN"<<endl;
    }else{

       cout<< "GAME OVER"<<endl;
    }






    return 0;

}
