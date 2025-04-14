int findPivot(vector<int>& arr) 
{
    int s = 0, e = arr.size() - 1;
    while (s < e) 
    {
        int mid = (s + e) / 2;
        if (arr[mid] >= arr[0])
            s = mid + 1;
        else
            e = mid;
    }
    return s;  // pivot index
}
// Step 2: Standard binary search on a subarray
int binarySearch(vector<int>& arr, int start, int end, int key)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return -1;  // if not found
}
// Step 3: Main function to find position using pivot logic


    // Search in the correct half based on k

int search(vector<int>& arr, int n, int k)
{
    int pivot = findPivot(arr);

    if (k >= arr[pivot] && k <= arr[n - 1])
        return binarySearch(arr, pivot, n - 1, k);
    else
        return binarySearch(arr, 0, pivot - 1, k);
}
