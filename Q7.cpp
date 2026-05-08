#include<iostream>
using namespace std;

class HighMarks {
private:
    int scoreA, scoreB, scoreC;

public:
    void greatest();
};

void HighMarks::greatest() {
    cout << "Enter Marks1 : ";
    cin >> scoreA;

    cout << "Enter Marks2 : ";
    cin >> scoreB;

    cout << "Enter Marks3 : ";
    cin >> scoreC;

    if (scoreA > scoreB && scoreA > scoreC) {
        cout << "Winner is 1 with marks " << scoreA;
    }
    else if (scoreB > scoreA && scoreB > scoreC) {
        cout << "Winner is 2 with marks " << scoreB;
    }
    else {
        cout << "Winner is 3 with marks " << scoreC;
    }
}

int main() {
    HighMarks obj;
    obj.greatest();
    return 0;
}
