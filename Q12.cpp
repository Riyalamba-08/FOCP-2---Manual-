#include<iostream>
using namespace std;

class triangle {
private:
    int a, b, c;

public:
    void getData();
    void chkTri();
};

void triangle::getData() {
    cout << "Enter Side 1 : ";
    cin >> a;

    cout << "Enter Side 2 : ";
    cin >> b;

    cout << "Enter Side 3 : ";
    cin >> c;
}

void triangle::chkTri() {
    if (a == b && b == c && a == c) {
        cout << "Equilateral Traingle";
    }
    else if (a == b && b != c || b == c && c != a || c == a && a != b) {
        cout << "Isoscles Triangle";
    }
    else {
        cout << "Scalene Triangle";
    }
}

int main() {
    triangle obj;
    obj.getData();
    obj.chkTri();
    return 0;
}
