/*Understanding XOR for Finding Duplicates
The key XOR properties:
a⊕a=0 (Any number XORed with itself cancels out)
a⊕0=a (Any number XORed with zero remains unchanged)
The array contains numbers from 1 to n-1 exactly once, except one number that appears twice.
The array has size n.

*/
//coding ninjas
#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr) {
    int ans = 0;
    
    // XOR all array elements ans = 1 ^ 3 ^ 4 ^ 2 ^ 2;
    for (int i = 0; i < arr.size(); i++) {
        ans ^= arr[i];
    }
    // XOR with numbers from 1 to n-1 ans = (1 ^ 3 ^ 4 ^ 2 ^ 2) ^ (1 ^ 2 ^ 3 ^ 4);
    for (int i = 1; i < arr.size()-1; i++) {
        ans ^= i;
    //Here, we use i instead of arr[i] because:
    //The array contains numbers ranging from 1 to n, but with one extra duplicate.
    //Every number in this range naturally occurs once in the first XOR loop.
    // By XORing with the complete range from 1 to n, we effectively cancel out all unique numbers.
    }
    return ans;
}
int main() {
    vector<int> arr = {1, 3, 4, 2, 2}; // Duplicate: 2
    cout << "Duplicate: " << findDuplicate(arr) << endl;
    return 0;
}
/*When the XOR Approach Fails
Let's check cases where it fails:

❌ Invalid Case: Number Exceeds n
cpp
Copy
Edit
vector<int> arr = {1, 6, 4, 5, 2, 2}; // 6 is out of range (1 to 5)
💥 Fails because 6 > n (5), breaking the XOR logic.
When the XOR Approach Works
✅ Valid Case: Single Duplicate, Numbers in Range

cpp
Copy
Edit
vector<int> arr = {1, 3, 4, 2, 2}; // n = 4
✅ Works because:

Numbers are in range (1 to 4).

One duplicate exists.*/