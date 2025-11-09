// Binary Search Algorithm in C++
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    int start = 0;
    int end = size - 1;
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            result = mid; // Key found
            break;
        }

        if (key > arr[mid]) 
        {
            start = mid + 1; // Search in the right half
        } 
        else
         {
            end = mid - 1; // Search in the left half
        }
    }

    if (result != -1)
     {
        cout << "Element found at index: " << result << endl;
    }
     else 
    {
        cout << "Element not found" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,7,9,2};
    int size =sizeof(arr)/sizeof(arr[0]);
    int key=9;
    int start=0;
    int end=size-1;
    int result=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        
        if(arr[mid]==key)
        {
            result= mid;
            break
        }
        else if(arr[mid]>arr[key])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    if (result != -1)
     {
        cout << "Element found at index: " << result << endl;
    }
     else 
    {
        cout << "Element not found" << endl;
    }

    return 0;
    
}