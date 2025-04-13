//pair sum- coding ninjas
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > pairSum(vector<int> &arr, int s){
   vector< vector<int> > ans;
   
   for(int i=0;i<arr.size(); i++ )
   {
   		for(int j = i+1; j<arr.size(); j++) {
        	if(arr[i] +arr[j] == s)
            {
            	vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
				ans.push_back(temp);
            }
        }
   }
   sort(ans.begin(), ans.end());
   return ans;
}
/*Working of the Code
Step 1: Initialize the Result Vector

vector<vector<int>> ans;
This stores all valid pairs.

Step 2: Nested Loop to Find Pairs
for(int i = 0; i < arr.size(); i++) {
    for(int j = i + 1; j < arr.size(); j++) {
Outer loop (i) → Iterates through each element.

Inner loop (j) → Checks every element after i for a valid pair.

Step 3: Check if Pair Sums to s
if(arr[i] + arr[j] == s)
If the sum of arr[i] and arr[j] equals s, store it.

Step 4: Store the Pair in Sorted Order
vector<int> temp;
temp.push_back(min(arr[i], arr[j]));
temp.push_back(max(arr[i], arr[j]));
ans.push_back(temp);
Stores the pair in ascending order using min and max.

Step 5: Sort the Result

sort(ans.begin(), ans.end());
Ensures the final output is lexicographically sorted.*/