#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40}; 
    int size = 4;                   

    // 1. Shift elements to the left 
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];        // Move each element one step to the left
    }

    // 2. Decrement size since one element is removed
    size--;

    // 3. Display the updated array
    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}