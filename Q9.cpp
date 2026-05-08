#include<iostream>
using namespace std;

class typeChar {
private:
    char inputChar;

public:
    void type();
};

void typeChar::type() {
    cout << "Enter Character : ";
    cin >> inputChar;

    if (inputChar == '0' || inputChar == '1' || inputChar == '2' || inputChar == '3' || inputChar == '4' || inputChar == '5' || inputChar == '6' || inputChar == '7' || inputChar == '8' || inputChar == '9') {
        cout << "Number";
    }
    else if (inputChar == 'a' || inputChar == 'e' || inputChar == 'i' || inputChar == 'o' || inputChar == 'u') {
        cout << "Vowels";
    }
    else {
        cout << "Consonants";
    }
}

int main() {
    typeChar obj;
    obj.type();
    return 0;
}
