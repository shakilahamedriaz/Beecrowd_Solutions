#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >>t;

    int arr[t];
    int sum=0;
    for(int i=0; i<t; i++)
    {

        cin >>arr[i];

        int c=arr[i]/3;
        int d=c*3;

        sum+=d;

    }

    cout<<sum<<endl;


    return 0;
}
