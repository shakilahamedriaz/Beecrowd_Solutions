#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int i, number, upper, lower, x;
    while (getline(cin, s))
    {
        int len = s.length();

        if (len >= 6 && len <= 32)
        {
            number = 0;
            upper = 0;
            lower = 0;
            x=0;

            for (i = 0; i < len; i++)
            {
                if (s[i] >= '0' && s[i] <= '9')
                    number++;
                else if (s[i] >= 'A' && s[i] <= 'Z')
                    upper++;
                else if (s[i] >= 'a' && s[i] <= 'z')
                    lower++;
                else x++;
            }

            if (number > 0 && upper > 0 && lower > 0 && x==0)
                cout << "Senha valida." << endl;
            else
                cout << "Senha invalida." << endl;
        }
        else
            cout << "Senha invalida." << endl;
    }
    return 0;
}
