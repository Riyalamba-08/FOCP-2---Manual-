#include<iostream>
using namespace std;

class Sum {
    int oddSum = 0, evenSum = 0;

public:
    void oddneven() {
        int nums[5];

        for (int idx = 0; idx <= 4; idx++) {
            cout << "Enter " << idx + 1 << " number";
            cin >> nums[idx];
        }

        for (int idx = 0; idx <= 4; idx++) {
            if (nums[idx] % 2 == 0) {
                evenSum = evenSum + nums[idx];
            }
            else {
                oddSum = oddSum + nums[idx];
            }
        }

        cout << "ODD sum = " << oddSum << "\n";
        cout << "Even sum = " << evenSum;
    }
};

int main() {
    Sum obj;
    obj.oddneven();
    return 0;
}
