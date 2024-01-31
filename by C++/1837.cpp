#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >>x >>y;

    int q,r;
    q=x/y; //quotient
    r=x%r;  //reminder

    if(r<0)
    {
        if(q<0)  q--;
        else if(q>0) q++;

        r=x-(y*q);
    }

    cout<<q<< " "<<r<<endl;

    return 0;

}