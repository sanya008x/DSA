#include <iostream>
using namespace std;
int main() {
    int n, first = 0, second = 1, next;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++)
    {
        cout << first << " ";  // Print the current term
        next = first + second; // Calculate the next term
        first = second;        // Move to next terms
        second = next;
    }
    return 0;
}
