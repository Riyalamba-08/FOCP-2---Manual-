#include<iostream>
using namespace std;

class leap {
private:
    int yr;

public:
    void leapChk();
};

void leap::leapChk() {
    cout << "Enter Year : ";
    cin >> yr;

    if (yr % 400 == 0 || yr % 4 == 0 && yr % 100 != 0) {
        cout << "Leap Year - 29 Days";
    }
    else {
        cout << "Not A Leap Year - 28 Days";
    }
}

int main() {
    leap obj;
    obj.leapChk();
    return 0;
}
