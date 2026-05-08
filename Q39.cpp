#include<iostream>
using namespace std;

class Pascals {
    int totalRows;

public:
    void printPascal() {
        cout << "Enter number of rows : ";
        cin >> totalRows;

        for (int currentRow = 0; currentRow < totalRows; currentRow++) {
            int value = 1;

            for (int space = 0; space <= totalRows - currentRow - 1; space++) {
                cout << " ";
            }

            for (int column = 0; column <= currentRow; column++) {
                cout << value << " ";
                value = value * (currentRow - column) / (column + 1);
            }

            cout << endl;
        }
    }
};

int main() {
    Pascals obj;
    obj.printPascal();
    return 0;
}
