#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int a= n*n;

     if(a%2==0){

        cout<<a/2<< " casas brancas e "<<a/2<< " casas pretas";
     }
     else{

        cout<<(a/2)+1<< " casas brancas e "<<a/2<< " casas pretas";
     }






    return 0;
}
