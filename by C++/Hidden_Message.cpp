#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t

    while (t--) {
        string s;
        getline(cin, s); // Read the entire line including spaces

        string ans = "";

        // Loop through the string to extract the hidden message
        for (int i = 0; i < s.length(); i++) {
            // If current character is not a space and the previous character is a space (or it's the first character)
            if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
                ans += s[i]; // Add the current character to the hidden message
            }
        }

        cout << ans << endl;
    }

    return 0;
}
