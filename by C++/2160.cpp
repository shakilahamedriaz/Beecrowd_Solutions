#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);  // read a line of text from input

    if (line.size() <= 80) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
