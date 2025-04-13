//leet code- 842
//refer notes for explanation
class Solution {
    public:
        int peakIndexInMountainArray(vector<int>& arr) {
            int left = 0;
            int right = arr.size() - 1;
    
            while (left < right) {
                int mid = left + (right - left) / 2;
    
                if (arr[mid] < arr[mid + 1]) 
                {
                    // Peak is on the right side
                    left = mid + 1;
                } 
                else 
                  {
                    // Peak is at mid or on the left side
                    right = mid;
                  }
            }
    
            return left; // or return right; both are same here
        }
    };
    