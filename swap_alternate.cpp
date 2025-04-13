#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 15, 8, 45};  // Correct array
    int n = sizeof(arr) / sizeof(arr[0]);  // Auto calculate size

    for (int i = 0; i < n - 1; i += 2) {  // Run till n-1 to prevent out-of-bounds
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    // Print the modified array
    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
