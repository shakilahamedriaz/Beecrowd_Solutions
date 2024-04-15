#include <iostream>
#include <cmath>

using namespace std;

int calculateDisplacement(int v, int t) {
    // acceleration
    int a = (t == 0) ? 0 : v / t;
    //initial velocity
    int u = v - a * t;
    // displacement for 2t
    int s = u * (2 * t) + 0.5 * a * pow(2 * t, 2);
    return s;
}

int main() {
    int v, t;
    
    while (cin >> v >> t) {
    
        int result = calculateDisplacement(v, t);
        cout << result << endl;
    }
    return 0;
}
