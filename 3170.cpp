#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;

    int res= b/2;

    if(res<=a){

        cout<< "Amelia tem todas bolinhas!"<<endl;
    }
    else {

        cout<< "Faltam "<<res-a<< " bolinha(s)"<<endl;
    }



    return 0;
}
