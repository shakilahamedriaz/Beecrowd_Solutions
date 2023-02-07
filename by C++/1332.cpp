#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int l= s.length();

        if(l==5){

            cout<< "3" <<endl;
        }

         else if((s[0]=='o' && s[1]=='n') || (s[1]=='n' && s[2]=='e') || (s[0]=='o' && s[2]=='e')){

            cout<< "1" <<endl;

        
         }
         else{

            cout<<"2"<<endl;
         }
    }
 


    return 0;
}