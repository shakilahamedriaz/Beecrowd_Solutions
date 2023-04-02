#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int ans=0;
    for(int i=0; i<n; i++){
        
        int gols=0;
        for(int j=0; j<m; j++){

            int temp;
            cin>>temp;
            if(temp>0){
                gols++;
            }
        }
        if(gols==m){
 
         ans++;

        }
    }
    cout<<ans<<endl;
    return 0;
}