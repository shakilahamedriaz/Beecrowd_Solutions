#include <iostream>
#include <string>
using namespace std;

string combiner(const string& str1, const string& str2) {
    string combined;
    int length = min(str1.length(), str2.length());

    for (int i = 0; i < length; i++) {
        combined += str1[i];
        combined += str2[i];
    }

    combined += str1.substr(length) + str2.substr(length);
    return combined;
}

int main() {
    int num_test_cases;
    cin >> num_test_cases;
    cin.ignore(); // Ignore the newline character

    for (int i = 0; i < num_test_cases; i++) {
        string str1, str2;
        getline(cin, str1);
        getline(cin, str2);

        string result = combiner(str1, str2);
        cout << result << endl;
    }

    return 0;
}
