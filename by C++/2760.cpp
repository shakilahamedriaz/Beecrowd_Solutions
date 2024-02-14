#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;

    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;

    size_t i = 0;

    while (i < a.length() && i < 10)
    {
        cout << a[i];
        i++;
    }

    i = 0;

    while (i < b.length() && i < 10)
    {
        cout << b[i];
        i++;
    }

    i = 0;

    while (i < c.length() && i < 10)
    {
        cout << c[i];
        i++;
    }

    cout << endl;

    return 0;
}
