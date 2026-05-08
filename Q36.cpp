#include<iostream>
using namespace std;

class Multi {
private:
    int matrixA[3][3];
    int matrixB[3][3];
    int result[3][3];

public:
    void inputMatrix() {
        cout << "Matrix 1" << endl;
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << "Enter the " << row + 1 << "," << col + 1 << " Element : ";
                cin >> matrixA[row][col];
            }
        }

        cout << "Matrix 2" << endl;
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << "Enter the " << row + 1 << "," << col + 1 << " Element : ";
                cin >> matrixB[row][col];
            }
        }
    }

    void multiplyMatrix() {
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                result[row][col] = 0;
                for (int k = 0; k < 3; k++) {
                    result[row][col] += matrixA[row][k] * matrixB[k][col];
                }
            }
        }
    }

    void display() {
        cout << "Matrix 1" << endl;
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << "\t" << matrixA[row][col];
            }
            cout << endl;
        }

        cout << "Matrix 2" << endl;
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << "\t" << matrixB[row][col];
            }
            cout << endl;
        }

        cout << "Result Matrix" << endl;
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << "\t" << result[row][col];
            }
            cout << endl;
        }
    }
};

int main() {
    Multi obj;
    obj.inputMatrix();
    obj.multiplyMatrix();
    obj.display();
    return 0;
}
