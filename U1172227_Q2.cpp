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

        // This piece of code makes sure that X + Y do not exceed
        while (x + y > nums.size()) {
            cout << "Invalid values. Please make sure that " << y << " + " << x << " does not exceed " << nums.size() << endl;

            x = firstInput();
            y = secondInput();
        }

        auto it = nums.begin();

        for (int i = 0; i < y; i++) {
            it++;
        }

        cout << "Before the deletion: " << endl;
        printList(nums);

        for (int i = 0; i < x; i++) {
            it = nums.erase(it);
        }
        cout << endl << "after the deletion: " << endl;
        printList(nums);
    }

    static int firstInput() {
        int x;

        while (true) {
            cout << "Please enter x, the number of nodes to delete: ";
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
            cout << "Please enter y, the number of nodes to skip: ";
            cin >> y;

            if (y > 0) {
                return y;
            }
            else {
                cout << "Please input a value that is greater than 0" << endl;
            }
        }
    }

    static void printList(const list<int> nums) {
        for (int num : nums) {
            cout << num << endl;
        }
        cout << "null" << endl;
    }
};

int main() {

    int x = listClass::firstInput();
    int y = listClass::secondInput();

    listClass::addingNumsList(x, y);
}
