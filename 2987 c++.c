#include <stdio.h>


int main() {
    int n, m;
    cin >> n >> m;
    cout << (((n + (m-1))%2 == 0)? 0 : 1 ) << endl;
    return 0;
}
