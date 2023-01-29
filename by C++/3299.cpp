#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

   ll n, m, r;
    bool st = false;

    cin >> n;

    m = n;
    while (m > 0) {
        r = m % 10;
        if (r == 3 and (m/10)%10 == 1) {
            st = true;
            break;
        }
        m /= 10;
    }
    if(st){

        cout<<n<<" es de Mala Suerte"<<endl;
    }
    else{

        cout<<n<< " NO es de Mala Suerte"<<endl;
    }

    return 0;
}
