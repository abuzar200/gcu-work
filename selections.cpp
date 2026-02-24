#include <iostream>
using namespace std;

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main selection sort function
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {           // Fix positions 0 to n-2
        int minIndex = i;                       // Assume arr[i] is smallest

        for (int j = i + 1; j < n; j++) {       // Search unsorted part
            if (arr[j] < arr[minIndex]) {       // Found smaller?
                minIndex = j;                   // Update minIndex
            }
        }

        // Swap arr[i] with smallest found
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int data[]         // Test array
    int n = sizeof(data) / sizeof(data[0]);     // Calculate size: 5

    cout << "Original array: ";
    printArray(data, n);

    selectionSort(data, n);

    cout << "Sorted array: ";
    printArray(data, n);

    return 0;
}
