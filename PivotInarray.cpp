#include <iostream>
#include <vector>
using namespace std;

int findRotationPivot(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }
    return low; // Index of smallest element (pivot)
}

int main() {
    vector<int> arr = {1,2,3,7,9};
    int pivotIndex = findRotationPivot(arr);
    cout << "Pivot Element: " << arr[pivotIndex] << " at index " << pivotIndex << endl;
    return 0;
}
