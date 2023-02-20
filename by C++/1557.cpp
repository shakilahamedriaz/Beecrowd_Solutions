#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

for(int i=1; i<n; i=i*2){

    for(int j=1; i<n; j=i*2){

        cout<<j<< " ";
    }
    cout<<i<< " ";
}


return 0;
}
