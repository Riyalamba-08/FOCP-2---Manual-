#include<iostream>
#include<string.h>
using namespace std;

class Pass {
public:
    void PassChk() {
        string password;
        cout << "Enter Password : ";
        cin >> password;

        int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

        for (int idx = 0; idx <= password.length(); idx++) {
            char ch = password[idx];

            if (ch >= 'A' && ch <= 'Z') {
                hasUpper = 1;
            }
            else if (ch >= 'a' && ch <= 'z') {
                hasLower = 1;
            }
            else if (ch >= '0' && ch <= '9') {
                hasDigit = 1;
            }
            else if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '&' || ch == '*' || ch == '%') {
                hasSpecial = 1;
            }
        }

        if (hasUpper == 1 && hasLower == 1 && hasDigit == 1 && hasSpecial == 1) {
            cout << "Password is valid";
        }
        else {
            cout << "Password Invalid";
        }
    }
};

int main() {
    Pass obj;
    obj.PassChk();
    return 0;
}
