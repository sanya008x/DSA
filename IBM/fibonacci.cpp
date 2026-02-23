
#include <iostream>
using namespace std;
int main() {
    int n,first = 0, second = 1, next;
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


// to print the nth term of fibonacci series
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 1) cout << 0;
    else if(n == 2) cout << 1;
    else {
        int first = 0, second = 1, next;

        for(int i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        cout << second;
    }

    return 0;
}