/*
AAA
BBB
CCC
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"enter n-";
    int n;
    cin>>n;
    int i=1;
    char ch='A'; //taking a char ch starting from A
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<" "<<ch; //same char will be printed in each row
            j=j+1;
        }
        cout<<endl;
        ch=ch+1; //incrementing the char after every row
        i=i+1;
    }
}
/*
ABC
ABC
ABC
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"enter n-";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
         char ch='A'; //reset the char ch inside the i loop
        int j=1;
        while(j<=n){
            cout<<" "<<ch;
            j=j+1;
            ch=ch+1; //char is incrementing column wise and not row wise
        }
        cout<<endl;
        i=i+1;
    }
}
/*
ABC
BCD
CDE
*/ //The first character of each row is 'A' + (i - 1), where i is the row number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        char ch = 'A' + (i - 1); // Start character for the row
        int j = 1; 
        while (j <= n) {
            cout << ch; // Print the character
            ch = ch + 1; // Move to the next character
            j = j + 1;
        }
        cout << endl; // Move to the next row
        i = i + 1;
    }
}
/*
A
BB
CCC
DDDD
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"enter n-";
    int n;
    cin>>n;
    int i=1;
    char ch='A'; //taking a char ch starting from A
    while(i<=n){
        int j=1;
        while(j<=i){ //no. of char in each row=row number
            cout<<" "<<ch; //same char will be printed in each row
            j=j+1;
        }
        cout<<endl;
        ch=ch+1; //incrementing the char after every row
        i=i+1;
    }
}
/*
A
BC
CDE
DEFG
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"enter n-";
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    //taking a char ch starting from A
    while(i<=n){
        int j=1;
        char ch='A'+(i-1); //start char for each row
        while(j<=i){
            cout<<" "<<ch; 
            j=j+1;
            ch=ch+1;
        }
        cout<<endl;
         //incrementing the char after every row
        i=i+1;
    }
}
/*
D
CD
BCD
ABCD
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"enter n-";
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        char ch='A'+n-i;//This initializes ch to start from a specific alphabet, decreasing as i increases.
        while(j<=i){
            cout<<" "<<ch;
            j=j+1;
            ch=ch+1; //while(j <= i) loop prints characters in increasing order, starting from ch.
        }
        cout<<endl;
        i=i+1;
    }
}
/*

   *
  **
 ***
****

*/
#include <iostream>
using namespace std;
int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        // Print spaces
        int space = 1;
        while (space <= n - i) {
            cout << " ";
            space++;
        }
        // Print stars
        int j = 1;
        while (j <= i) {
            cout << "*";
            j++;
        }
        cout << endl; // Move to the next line
        i++;
    }
    return 0;
}
/*

****
***
**
* 

*/
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j<=n-i+1) //no. of stars in each row=n-i+1
        {
            cout << "*";
            j=j+1;
        }
        cout << endl;
        i++;
    }
    return 0;
}
/*
****
 ***
  **
   *
*/
#include <iostream>
using namespace std;
int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int space=1; 
        while(space<=i-1){ //run a loop for space; no. of spaces=i-1
            cout<<" ";
            space=space+1;}
        int j = 1;
        while (j<=n-i+1) { //no. of stars= n-i+1
            cout << "*";
            j=j+1;
        }
        cout << endl;
        i++; }
}

/*
1111
 222 
  33
   4
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int space=1;
        while(space<=i-1){
            cout<<" ";
            space=space+1;}
        
        int j = 1;
        while (j<=n-i+1) {
            cout << ""<<i; //row number is being printed
            j=j+1;
        }
        
        cout << endl;
        i++;
    }

    return 0;
}
/*
   1
  22
 333
4444  
*/
#include <iostream>
using namespace std;
int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int space=1;
        while(space<=n-i) //every row has n-i no. of spaces
        {
            cout<<" ";
            space=space+1;
            
        }
        int j = 1;
        while (j<=i) //no.of stars 
        {
            cout << ""<<i;
            j=j+1;
        }
        cout << endl;
        i++;
    }
}
/*
    1
   23
  456
78910        
*/
#include <iostream>
using namespace std;
int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    int i = 1;
    int count=1;
    while (i <= n) {
        int space=1;
        while(space<=n-i) //Prints (n - i) spaces to align the numbers to the right.
        {
            cout<<" ";
            space=space+1;
            
        }
        int j = 1;
        while (j<=i)
        {
            cout << ""<<count;// Prints numbers incrementally (count).
            j=j+1;
            count=count+1; //Increases count after each number.
        }
        cout << endl;
        i++;
    }
}
/* 
    1
   121
  12321
 1234321
123454321
*/
#include <iostream>
using namespace std;
int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    int i = 1;
    while(i<=n)
    {
    int space=1;
    //First while loop (space):Prints (n - i) spaces for right alignment.
    while(space<=n-i){
        cout<<" ";
        space=space+1;
    }
    //Second while loop (j):Prints numbers in increasing order from 1 to i.
    int j=1;
    while(j<=i){
        cout<<j;
        j=j+1;
    }
    //Third while loop (k):Prints numbers in decreasing order from i-1 to 1
    int k=i-1;
    while(k){
        cout<<k;
        k=k-1;
    }
    cout<<endl;
    i=i+1;
    }
}

