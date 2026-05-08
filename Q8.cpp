#include<iostream>
using namespace std;

class Tag {
private:
    int totalIDs;
    int currentID;

public:
    void getData();
    void giveTag();
};

void Tag::getData() {
    cout << "Enter Number of ID's : ";
    cin >> totalIDs;
}

void Tag::giveTag() {
    for (int idx = 1; idx <= totalIDs; idx++) {
        cout << "Enter ID";
        cin >> currentID;

        if (currentID % 3 == 0 && currentID % 5 == 0) {
            cout << "Buzz" << endl << "Fuzz" << endl;
        }
        else if (currentID % 3 == 0) {
            cout << "Buzz" << endl;
        }
        else if (currentID % 5 == 0) {
            cout << "Fuzz" << endl;
        }
        else {
            cout << "Error , not divisible by either 3 or 5" << endl;
        }
    }
}

int main() {
    Tag obj;
    obj.getData();
    obj.giveTag();
    return 0;
}
