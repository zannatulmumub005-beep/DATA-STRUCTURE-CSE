#include <iostream>
using namespace std;

int main() {
    int capacity = 10;
    int arr[10] = {10, 20, 30, 40};
    int size = 4;
    int value = 5;

    if (size < capacity) {
        for (int i = size; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = value;
        size++;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}