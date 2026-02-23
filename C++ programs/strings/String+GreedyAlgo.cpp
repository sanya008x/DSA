/* You are given a binary string pwd (only 0 and 1).
The password is secure if:
	1.	It can be divided into non-overlapping substrings
	2.	Each substring has even length
	3.	Each substring contains only 0s or only 1s (no mix)
You can flip characters (0 → 1 or 1 → 0).
👉 Goal: Find the minimum number of flips required to make the string valid. 
//program start
// 010010 6/2=3 sustrings = 01,00,10 flip=1...flip=2 --> flip copunter = 2
*/
#include <iostream>
using namespace std;
int main()
{
    string s;
    cout<<"enter a string consisting of binary digits- ";
    cin>>s; 
    
    int flip=0;
    
    for(int i=0;i < s.length();i+=2)
    {
      if(s[i]!= s[i+1])
      {
          flip++; 
      }
    }
    
    cout<<flip;
    return 0;
}

//if we want to make it a function if test cases are there
#include <iostream>
using namespace std;

// FUNCTION banaya – purana logic yahin hai
int minimumFlips(string pwd) {
    int flips = 0;

    for (int i = 0; i < pwd.length(); i += 2) {
        if (pwd[i] != pwd[i + 1]) {
            flips++;
        }
    }

    return flips;
}

int main() {
    string pwd;
    cin >> pwd;

    cout << minimumFlips(pwd);
    return 0;
}