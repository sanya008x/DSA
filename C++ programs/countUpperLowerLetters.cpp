#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter text: ";
    getline(cin, s);

    int upper = 0, lower = 0, digit = 0, special = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
        else if (s[i] >= '0' && s[i] <= '9')
            digit++;
        else
            special++;
    }

    cout << "Uppercase letters: " << upper << endl;
    cout << "Lowercase letters: " << lower << endl;
    cout << "Digits: " << digit << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}

// Sample Input/Output

// Input: Hello World! 123 :)

// Output:  Uppercase letters: 2
//Lowercase letters: 8
//Digits: 3
//Special characters: 4


