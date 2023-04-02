//2534 uri online
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
   while (cin >> n >> q) {
    
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        int b[q];
        for(int i=0; i<q; i++)
        {
            cin >> b[i];
        }

        for(int i=0; i<q; i++)
        {
            cout << a[n-b[i]] << endl;
        }
    }
}