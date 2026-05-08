#include<iostream>
#include<cmath>
using namespace std;

class roots {
private:
    int coefA, coefB, coefC;
    float disc;

public:
    void getData();
    void discriminant();
    void ans();
};

void roots::getData() {
    cout << "Input As Per This Equation ax^2 + bx + c=0" << endl;

    cout << "Enter a : ";
    cin >> coefA;

    cout << "Enter b : ";
    cin >> coefB;

    cout << "Enter c : ";
    cin >> coefC;

    disc = coefB * coefB - 4 * coefA * coefC;
}

void roots::discriminant() {
    if (disc == 0) {
        cout << "Real & Equal Roots" << endl;
    }
    else if (disc >= 0) {
        cout << "Real & Unequal Roots" << endl;
    }
    else {
        cout << "Imaginary Roots" << endl;
    }
}

void roots::ans() {
    if (disc < 0) {
        cout << "Roots Imaginary - Error";
    }
    else {
        cout << "The Roots Are : "
             << (-coefB + sqrt(disc)) / 2 * coefA
             << " & "
             << (-coefB - sqrt(disc)) / 2 * coefA;
    }
}

int main() {
    roots obj;
    obj.getData();
    obj.discriminant();
    obj.ans();
    return 0;
}
