/*
left rotate the array by d place
for eg if arr={1,2,3,4,5} is given where n=5, then d=4 means left rotation by 4 places i.e new array ={5,1,2,3,4}
if arr= {1,2,3,4,5}, n=5 but d=7 meaning 5 roations + 2 --> {3,4,5,1,2}
whenever we do a full roation i.e. if d>n the array comes back to its original position + whatever's left
this means that whenever multiple of "n" rotations are done , the array always comes back to its original position.
*/

#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    d = d % n;   // handle d > n

    // repeat left rotate by 1, d times
    while(d--) {
        int temp = arr[0];           // store first element

        for(int i = 1; i < n; i++) {
            arr[i - 1] = arr[i];     // shift left
        }

        arr[n - 1] = temp;           // put first at end
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
