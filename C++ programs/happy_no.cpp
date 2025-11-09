//19 is a happy number or not ?

#include <iostream>
#include <unordered_set>
using namespace std;

int sumOfSquares(int n) { //function to calculate sum of squares of digits
    int sum = 0;
    while (n > 0) {
        int digit = n % 10; //digit=19%10 = 9 ; 

        sum += digit * digit; // sum= sum+ 9*9=81;

        n /= 10; //Removes the last digit from number n; n=19/10=1
          
        //Loop continues for next digit.

    }
    
    return sum; //return sum = 82
}

//unordered set has functions- seen.insert(), seen.find(), seen.end().
/*Term
seen.find(n)-Go and search if n is already present in the set.
seen.end()-Means “not found” or “past the last element”.
seen.find(n) == seen.end()-Means “n is NOT in the set”.*/

bool isHappy(int n) //returns true if n is happy number
{ 
    unordered_set<int> seen; 
    //A set is created to store numbers we’ve already seen. Initially: seen = { }

    while (n != 1 && seen.find(n) == seen.end()) 

     //we use seen.find==seen.end to cont loop as long as n is not in set
    {
    seen.insert(n); //seen= {19}

        n = sumOfSquares(n); //sumOfSquares(19)=1sq+9sq= 82
    }

    return n == 1; //if n becomes 1, return true
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHappy(num))
        cout << num << " is a Happy Number 😊" << endl;
    else
        cout << num << " is not a Happy Number 😔" << endl;

    return 0;
}