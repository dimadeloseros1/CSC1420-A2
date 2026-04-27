#include <iostream>
#include <list>
#include <vector>
using namespace std;

// bool operator==(const list<int>::iterator &lhs, int rhs);

class listClass {
public:
    static void addingNumsList(int x, int y) {
        list<int> nums;

        nums.push_back(1);
        nums.push_back(2);
        nums.push_back(3);
        nums.push_back(4);
        nums.push_back(5);
        nums.push_back(6);
        nums.push_back(7);
        nums.push_back(8);
        nums.push_back(9);
        nums.push_back(10);

        auto it = nums.begin();

        for (int i = 0; i < y; i++) {
            it++;
        }

        for (int i = 0; i < x; i++) {
            it = nums.erase(it);
        }

        for (int num : nums) {
            cout << num << endl;
        }

    }

    static int firstInput() {
        int x;

        while (true) {
            cout << "Please enter the first number between 1 and 9 'inclusive': ";
            cin >> x;

            if (x > 0) {
                return x;
            }
            else {
                cout << "Please input a value that is greater than 0" << endl;
            }
        }
    }

    static int secondInput() {
        int y;

        while (true) {
            cout << "Please enter the second number: ";
            cin >> y;

            if (y > 0) {
                return y;
            }
            else {
                cout << "Please input a value that is greater than 0" << endl;
            }
        }
    }

    // static void printList(const list<int> &nums) {
    //     for (int num : nums) {
    //         cout << num << endl;
    //     }
    // }
};

int main() {

    int x = listClass::firstInput();
    int y = listClass::secondInput();

    listClass::addingNumsList(x, y);
}
