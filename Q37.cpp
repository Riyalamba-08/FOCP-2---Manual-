#include<iostream>
using namespace std;

class User {
    string username;

public:
    void chkName() {
        int flag = 0;  // reset every time

        cout << "Enter Username : ";
        getline(cin, username);

        for (int i = 0; i < username.length(); i++) {
            if (!((username[i] >= 'A' && username[i] <= 'Z') ||
                  (username[i] >= 'a' && username[i] <= 'z') ||
                  (username[i] >= '0' && username[i] <= '9'))) {
                flag = 1;
                break;
            }
        }

        if (flag == 1) {
            cout << "Username is Invalid";
        } else {
            cout << "Username is Valid";
        }
    }
};

int main() {
    User u;
    u.chkName();
    return 0;
}
