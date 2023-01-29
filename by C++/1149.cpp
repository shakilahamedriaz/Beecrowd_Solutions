#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a ,n;
    cin>>a>>n;

  while(n==0 || n<0){

    cin>>n;
  }

    int sum=0;

      int i=a;
      while(n--){
        sum+=i;

        i++;
      }

    cout<<sum<<endl;


    return 0;
}
