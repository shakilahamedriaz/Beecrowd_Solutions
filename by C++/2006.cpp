#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int con = 0;
    for(int i = 0, a; i < 5; i++){
        cin >> a;
        if(n == a)
            con++;
    }

    cout << con << endl;

    return 0;
}
