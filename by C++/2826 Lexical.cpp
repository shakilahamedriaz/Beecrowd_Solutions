#include <iostream>
#include <string>

using namespace std;

int main()
{
    string palavra1, palavra2;

    cin >> palavra1 >> palavra2;
    
    cout<<palavra1.compare(palavra2)<<endl;
    if (palavra1.compare(palavra2) > 0)
    {
        cout << palavra2 << '\n';
        cout << palavra1 << '\n';
    }
    else if (palavra1.compare(palavra2) < 0)
    {
        cout << palavra1 << '\n';
        cout << palavra2 << '\n';
    }

    return 0;
}
