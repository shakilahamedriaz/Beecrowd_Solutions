#include<bits/stdc++.h>
using namespace std;

int main(){

   int n; cin>>n;
   int arr[n];

   for(int i=0;i<n; i++){

      cin>>arr[i];

   }

  int x= *min_element(arr, arr+n);

   cout<< "Menor valor: "<<x<<endl;


   for(int i=0; i<n; i++)
   {

       if(x==arr[i]){

        cout<< "Posicao: "<<i+1-1<<endl;
       }
   }

    return 0;
}
