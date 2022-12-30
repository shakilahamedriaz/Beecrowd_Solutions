#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
int a,b;
int sum=0;
while(t--){

    cin>>a>>b;

    for(int i=a; i<=b; i++){


    if(i%2==0){


        sum= sum+i;
    }
    }
 cout<<sum<<endl;
}

return 0;
}
