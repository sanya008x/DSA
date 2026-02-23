// we use this fucntion for dynamic memory allocation
//for eg. if array size is not known at compile time, then we use vector to store the elements dynamically 
//i.e. we can add or remove elements from vector at runtime without knowing the size beforehand.
// for SPACE SEPERATED VALUES I.E. IF USER INPUTS MULTIPLE VALUES IN A SINGLE LINE SEPERATED BY SPACE .

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    cout<<"enter numbers in a single line";
    string str;
    getline(cin,str);    

    vector<int> v;

    stringstream ss(str);    // stringstream to read integers from the string
    int x;

    while(ss>>x)             //runs unitl all integers(x) are read
    {
        v.push_back(x);    // adding elements to the vector
    }

     for(int i=0; i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }

     return 0;
}

// Sample Input/Output
// enter numbers in a single line- 23 45 90 45 67 90 
// 23 45 90 45 67 90

//FOR COMMA SEPERATED VALUES I.E. IF USER INPUTS MULTIPLE VALUES IN A SINGLE LINE SEPERATED BY COMMA . EG. 1,2,3,4,5

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    vector<int> v;
    string line;

    cout << "Enter numbers in one line:\n";
    getline(cin, line);

    // 🔹 Replace commas with spaces
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] == ',')
        {
            line[i] = ' ';
        }
    }

    stringstream ss(line);
    int num;

    // take input dynamically using while loop
    while (ss >> num) {
        v.push_back(num);
    }

    // now print using for loop
    cout << "\nYou entered: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}

