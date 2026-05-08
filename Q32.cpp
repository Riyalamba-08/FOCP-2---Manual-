#include<iostream>
#include<climits>
using namespace std;

class largnseclarg {
    int currentMax, largestVal, nums[5];
    int secondMax = INT_MIN;

public:
    void largest() {
        for (int idx = 0; idx < 5; idx++) {
            cout << "Enter " << idx + 1 << " number : ";
            cin >> nums[idx];
        }

        currentMax = nums[0];

        for (int idx = 0; idx < 5; idx++) {
            if (currentMax > nums[idx]) {
                largestVal = currentMax;
            }
            else {
                currentMax = nums[idx];
                largestVal = currentMax;
            }
        }

        cout << "Largest Number is : " << largestVal << endl;
    }

    void seclargest() {
        for (int idx = 0; idx < 5; idx++) {
            if (nums[idx] < largestVal && nums[idx] > secondMax) {
                secondMax = nums[idx];
            }
        }

        if (secondMax == INT_MIN) {
            cout << "No Second Largest Element";
        }
        else {
            cout << "Second Largest Element is " << secondMax;
        }
    }
};

int main() {
    largnseclarg obj;
    obj.largest();
    obj.seclargest();
    return 0;
}
