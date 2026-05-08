#include<iostream>
using namespace std;

class Price {
    int currentMax, resultMax;

public:
    void maxPrice() {
        int costs[10];

        for (int idx = 0; idx < 10; idx++) {
            cout << "Enter the cost of the " << idx << " item";
            cin >> costs[idx];
        }

        currentMax = costs[0];

        for (int idx = 0; idx < 10; idx++) {
            if (currentMax > costs[idx]) {
                resultMax = currentMax;
            }
            else {
                currentMax = costs[idx];
                resultMax = currentMax;
            }
        }

        cout << "Max Amount is : " << resultMax;
    }
};

int main() {
    Price obj;
    obj.maxPrice();
    return 0;
}
