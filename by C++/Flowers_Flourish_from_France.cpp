#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while(true) {

        getline(cin, s);
        if(s == "*") break;

        int len = s.length();
        char first = s[0];
        char first2 = s[0] + 32; 
        char first3 = s[0] - 32; 

        bool flag = true;

        for(int i = 0; i < len; i++) {
            if(s[i] == ' ') {
                
                if(s[i + 1] != first && s[i + 1] != first2 && s[i + 1] != first3) {
                    flag = false;
                    break;
                }
            }
        }

        if(flag) cout << "Y" << endl;
        else cout << "N" << endl;
    }

    return 0;
}
