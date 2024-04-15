#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,aa,bb,cc;
    cin >>a>>b>>c>>aa>>bb>>cc;

    int t1=aa-a;
    int t2=bb-b;
    int t3=cc-c;

    int sum=0;


    if(t1>=0) sum+=t1;
    if(t2>=0) sum+=t2;
    if(t3>=0) sum+=t3;

    cout<<sum<<endl;


    return 0;
}
