#include <iostream>

using namespace std;

void sort(int arr[], int size);

int main() {

    int arr[] = {0, 4, 5, 12, 2, 51, 1, 6, 66, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i: arr) {
        cout << i << ", ";
    }
    cout << endl;
    sort(arr, size);

    for (int i: arr) {
        cout << i << ", ";
    }

    // useful function fill(begin, end, value)
    // fills certain area of array with certain value, works with strings and such aswell
    // .empty() same as == null
    fill(arr, arr + 2, 5);

    return 0;
}

void sort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
    }
}