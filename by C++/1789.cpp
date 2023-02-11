#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int arr[500];

    while((scanf("%d",&n))!=EOF){

    for(int i=0; i<n; i++){

        cin>>arr[i];

    }

    int m;
    m=arr[0];

    for(int i=0; i<n; i++){

        if(arr[i]>m)
             m=arr[i];
    }


    if(m<10){

        cout<<1<<endl;
    }
    else if(m>=10 && m<20){


        cout<<2<<endl;
    }
    else if(m>=20){

        cout<<3<<endl;
    }

    }
    return 0;
}
