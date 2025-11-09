/*
0    or less INVALID INPUT
1    to 2000 g Time Estimated: 25 min
2001 to 4000 g Time Estimated: 35 min
4001 to 7000 g Time Estimated: 45 min
Above   7000 g OVERLOADED

*/

#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;

    if (weight <= 0) {
        cout << "INVALID INPUT";
    }
    else if (weight > 0 && weight <= 2000) {
        cout << "Time Estimated: 25 minutes";
    }
    else if (weight > 2000 && weight <= 4000) {
        cout << "Time Estimated: 35 minutes";
    }
    else if (weight > 4000 && weight <= 7000) {
        cout << "Time Estimated: 45 minutes";
    }
    else if (weight > 7000) {
        cout << "OVERLOADED";
    }

    return 0;
}
