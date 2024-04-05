#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a, b, j;
    char x[100], y[100];
    cin >> a;
    cin.ignore(); // to clear input buffer
    while (a--) {
        cin.getline(x, 100);
        j = 0;
        b = strlen(x);
        for (int i = 0; i < b; i++) {
            if (((x[i] != ' ') && (x[i - 1] == ' ')) || ((i == 0 && x[i] != ' '))) {
                y[j] = x[i];
                j++;
            }
        }
        y[j] = '\0';
        cout << y << endl;
    }
    return 0;
}
