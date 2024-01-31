#include<iostream>
using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        int n,ind;
        cin >>n;
        for(int i=0; i<n; i++)
        {
            cin>>ind;
            cout << s[ind-1];
        }
        cout<<endl;
    }

    return 0;
}