#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    while(1){

     cin>>n;
     if(n==0) break;

    else
     cout<<n*(n + 1)*(2*n + 1)/6<<endl;

    }

return 0;
}
