#include<iostream>
using namespace std;

class Palindrome {
private:
    int number, tempVal, digit, reverseNum = 0;

public:
    void chkPal() {
        cout << "Enter ID : ";
        cin >> number;

        tempVal = number;

        while (tempVal > 0) {
            digit = tempVal % 10;
            reverseNum = reverseNum * 10 + digit;
            tempVal = tempVal / 10;
        }

        if (reverseNum == number) {
            cout << "Palindrome ID";
        }
        else {
            cout << "Not Palindrome ID";
        }
    }
};

int main() {
    Palindrome obj;
    obj.chkPal();
    return 0;
}
