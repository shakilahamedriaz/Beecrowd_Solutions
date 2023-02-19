#include<bits/stdc++.h>
using namespace std;

int main()
{

   double x;
   cin>>x;
   double N[100];

   N[0]=x;

   cout<<fixed<< setprecision(4)<< "N[0] = "<<N[0]<<endl;

   for(int i=1; i<100; i++){
    
        N[i]=N[i-1]/2;

    cout << fixed << setprecision(4) << "N["<<i<<"] = "<< N[i]<< endl;
   }




    return 0;
}