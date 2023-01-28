#include <iostream>
using namespace std;

bool isPerfect(int x) {
    int sum = 0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }
    return sum == x;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (isPerfect(x)) {
            cout << x << " eh perfeito" << endl;
        } else {
            cout << x << " nao eh perfeito" << endl;
        }
    }
    return 0;
}
