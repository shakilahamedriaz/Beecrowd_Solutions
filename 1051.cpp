#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){

float n;
cin>>n;

if(n>=0.00 && n<=2000.00){

    cout<<"Isento"<<endl;
}
else if(n> 2000.00 && n<=3000.00){

    n= n-2000.00;
    n=(n*8)/100;
    cout<< fixed << setprecision(2)<<"R$ "<<n<<endl;
}else if(n>3000.00 && n< 4500.00){

     n= n-30000.00;
     n= (n*18)/100;

     cout<< fixed << setprecision(2)<<"R$ "<<n<<endl;


}else{

   n = n-4500.00;
   n = (n*28)/100;

   cout<< fixed << setprecision(2)<< "R$ "<<n<<endl;


}


return 0;
}
