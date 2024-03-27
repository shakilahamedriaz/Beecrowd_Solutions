#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string a, b;
        cin >> a >> b;

        string s;
        int len = a.length(), len2 = b.length();
        int maxLength = max(len, len2);

        for (int i = 0; i < maxLength; i++) {
            if (i < len)
                s += a[i];
            if (i < len2)
                s += b[i];
        }

        cout << s << endl;
    }

    return 0;
}
