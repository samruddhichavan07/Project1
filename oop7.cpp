#include <iostream>
using namespace std;

// Template function for selection sort
template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        T temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Test with an integer array
    int intArray[] = {29, 10, 14, 37, 13};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    cout << "Original integer array: ";
    printArray(intArray, intSize);
    
    selectionSort(intArray, intSize);
    cout << "Sorted integer array: ";
    printArray(intArray, intSize);

    // Test with a float array
    float floatArray[] = {3.5, 2.1, 5.7, 1.9, 4.4};
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);
    cout << "Original float array: ";
    printArray(floatArray, floatSize);
    
    selectionSort(floatArray, floatSize);
    cout << "Sorted float array: ";
    printArray(floatArray, floatSize);

    return 0;
}