#include <iostream>
using namespace std;

int main() {
    int units;
    int bill = 0;
    cout << "Enter electricity units: ";
    cin >> units;

    for(int i = 1; i <= units; i++) {
        if(i <= 100) {
            bill = bill + 5;
        }
        else if(i <= 200) {
            bill = bill + 7;
        }
        else {
            bill = bill + 10;
        }
    }

    cout << "Total Electricity Bill = Rs. " << bill;

    return 0;
}
