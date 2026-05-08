#include<iostream>
using namespace std;

class Divisible {
    int totalCount = 0;

public:
    void chkDivisible() {
        int nums[5];

        for (int idx = 0; idx < 5; idx++) {
            cout << "Enter " << idx + 1 << " Element : ";
            cin >> nums[idx];
        }

        for (int idx = 0; idx < 5; idx++) {
            if (nums[idx] % 3 == 0 && nums[idx] % 5 == 0) {
                totalCount++;
            }
        }

        cout << "The number of elements divisible by both 3 & 5 is : " << totalCount;
    }
};

int main() {
    Divisible obj;
    obj.chkDivisible();
    return 0;
}
