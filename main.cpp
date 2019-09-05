#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    vector<int>revVctr(8);// User values
    int i;                        // Loop index
    int temp = 0;           //temp variable

    cout << "Enter " << NUM_ELEMENTS << " integer values separately, pressing enter after each one..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr.at(i);
    }
    for (i=0; i < (NUM_ELEMENTS/2)  ; ++i){
        temp = revVctr.at(i);
        revVctr.at(i) = revVctr.at((NUM_ELEMENTS - i )-1);
        revVctr.at((NUM_ELEMENTS - i )-1) = temp;
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr.at(i);
    }
    cout << endl;

    return 0;
}