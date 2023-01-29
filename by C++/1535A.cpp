#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

      int x=max(a,b);
      int y=max(c,d);

      if(x+y>a+b && x+y>c+d){

        cout<< "Yes"<<endl;
      }

        else{

            cout<< "No"<<endl;
        }


    }


    return 0;
}
