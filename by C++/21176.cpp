#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string S;
    cin >> S;

    int num_ones = 0;
    for (char c : S) {
        if (c == '1') {
            num_ones++;
        }
    }

    if (num_ones % 2 == 0) {
        S += '0';
    } else {
        S += '1';
    }

    cout << S << endl;

    return 0;
}
