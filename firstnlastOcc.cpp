
int firstOcc(vector<int>& arr, int n, int key) 
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) 
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) 
        {
            ans = mid;
            e = mid - 1; 
        } 
        else if (arr[mid] < key)
         {
            s = mid + 1;
        }
         else 
        {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) 
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
         {
            ans = mid;
            s = mid + 1; 
        }
         else if (arr[mid] < key)
          {
            s = mid + 1;
        } 
        else 
        {
            e = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
 {
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}

/*✅ Steps to find first occurrence:
Initialize start = 0, end = n-1, ans = -1.

While start <= end:

Calculate mid = (start + end)/2.

If arr[mid] == key:

Store mid in ans.

Move to left part → end = mid - 1.

Else if key > arr[mid] → start = mid + 1.

Else if key < arr[mid] → end = mid - 1.

Return ans.

✅ Steps to find last occurrence:
Initialize start = 0, end = n-1, ans = -1.

While start <= end:

Calculate mid = (start + end)/2.

If arr[mid] == key:

Store mid in ans.

Move to right part → start = mid + 1.

Else if key > arr[mid] → start = mid + 1.

Else if key < arr[mid] → end = mid - 1.

Return ans.

✅ Steps in firstAndLastPosition function:
Call firstOcc() to get first position.

Call lastOcc() to get last position.

Return both as a pair.
*/

