#include <iostream>

using namespace std;

int main() {

    int ca,n,k;
    cin>>ca;
    while(ca--)
    {
        cin>>n>>k;

        cout<<(n%k)+(n/k);
        cout<<endl;
    }

    return 0;
}
