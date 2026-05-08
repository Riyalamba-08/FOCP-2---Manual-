#include<iostream>
using namespace std;

class Student {
    int m1, m2, m3, m4, m5, totalMarks;
    float perc;

public:
    void getData() {
        cout << "Enter marks for first subject : ";
        cin >> m1;

        cout << "Enter marks for second subject : ";
        cin >> m2;

        cout << "Enter marks for third subject : ";
        cin >> m3;

        cout << "Enter marks for fourth subject : ";
        cin >> m4;

        cout << "Enter marks for fifth subject : ";
        cin >> m5;
    }

    void total() {
        totalMarks = m1 + m2 + m3 + m4 + m5;
        cout << "The Total Amount Is : " << totalMarks << "\n";
    }

    void percentage() {
        perc = (totalMarks / 5);
        cout << "Percenatage is : " << perc;
    }
};

int main() {
    Student obj;
    obj.getData();
    obj.total();
    obj.percentage();
    return 0;
}
