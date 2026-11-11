#include <iostream>

int main() {
    int arr[10] = {10, 20, 30}; // Array can hold up to 10 items
    int size = 3;               // Currently holding 3 items

    int newItem = 40;
    arr[size] = newItem;        // Insert at the current end index
    size++;                     // Update size

    std::cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}