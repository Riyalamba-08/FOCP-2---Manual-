#include<iostream>
using namespace std;

class Maximum {
private:
    int count, maxVal = 0, current;

public:
    void maxnum();
};

void Maximum::maxnum() {
    cout << "Enter N Number : ";
    cin >> count;

    for (int idx = 1; idx <= count; idx++) {
        cout << "Enter " << idx << " Number : ";
        cin >> current;

        if (maxVal < current) {
            maxVal = current;
        }
    }

    cout << "The MAX Number is : " << maxVal;
}

int main() {
    Maximum obj;
    obj.maxnum();
    return 0;
}
