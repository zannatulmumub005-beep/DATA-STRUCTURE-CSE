#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40}; // Capacity 10, contains 4 elements
    int size = 4;                   // Current element count

    // Simply decrease size to remove the last element
    size--;

    // Print updated array
    cout << "Array after deletion from end: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}