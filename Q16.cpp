#include<iostream>
using namespace std;

class Prime {
private:
    int value;

public:
    void getData() {
        cout << "Enter Number : ";
        cin >> value;
    }

    void chkPrime() {
        if (value <= 1) {
            cout << "Not Prime";
            return;
        }

        int flag = 1;

        for (int i = 2; i < value / 2; i++) {
            if (value % i == 0) {
                flag = 0;
            }
        }

        if (flag == 1) {
            cout << "Prime Number";
        }
        else {
            cout << "Not Prime Number";
        }
    }
};

int main() {
    Prime obj;
    obj.getData();
    obj.chkPrime();
    return 0;
}
