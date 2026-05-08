#include<iostream>
using namespace std;

class Sum {
    int matA[3][3], matB[3][3], totalSum = 0;

public:
    void matrices() {
        cout << "Matrix 1" << endl;

        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << "Enter the " << row + 1 << "," << col + 1 << "element : ";
                cin >> matA[row][col];
            }
        }

        cout << "Matrix 2" << endl;

        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << "Enter the " << row + 1 << "," << col + 1 << "element : ";
                cin >> matB[row][col];
            }
        }

        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                totalSum = totalSum + matA[row][col];
            }
        }

        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                totalSum = totalSum + matB[row][col];
            }
        }

        cout << "The sum of All the elements of both matrices is " << totalSum;
    }
};

int main() {
    Sum obj;
    obj.matrices();
    return 0;
}
