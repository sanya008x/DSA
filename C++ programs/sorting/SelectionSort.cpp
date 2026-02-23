#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[i], arr[minIndex]);
    }
}
/*Pass 1 (i = 0):
minIndex = 0 → value = 64
Compare with:
arr[1] = 25 → 25 < 64 → minIndex = 1
arr[2] = 12 → 12 < 25 → minIndex = 2
arr[3] = 22 → 22 > 12 → no change
arr[4] = 11 → 11 < 12 → minIndex = 4
🔁 Swap arr[0] with arr[4] → [11, 25, 12, 22, 64]*/ //now the steps are repeated until sorted array is obtained

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    cout << "Original array: ";
    printArray(arr);

    selectionSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}

