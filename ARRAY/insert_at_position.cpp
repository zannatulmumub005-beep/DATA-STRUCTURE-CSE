#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40};
    int size = 4;                   // number of elements

    int value = 25;                
    int pos = 2;                    //fix position

    // Shift elements to the right 
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // insert the new value at the specified position
    arr[pos] = value;

    // Increment size after successful insertion
    size++;

    // 4. Print the updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}