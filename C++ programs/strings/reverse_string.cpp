//use 2 pointers one at start and one at end swap and move towards center
//string will be printed reversed.
//jab pointers cross/exceed ho jaye tab ruk jana hai.
#include <iostream>
#include <string>
using namespace std;
// Function to reverse a string using two pointers
void reverseString(string &str) {
    int left = 0;
    int right = str.length() - 1;
//Hum right pointer ko n - 1 se start isliye karte hain kyunki:
//👉 Array / string indexing 0 se start hoti hai
// so if str= "sanya" then indexing will be s=0, a=1, n=2, y=3, a=4 
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);   // to take full sentence input

    reverseString(str);  // calling the function

    cout << "Reversed string: " << str;
    return 0;
}

OR

#include<iostream>
#include <string>
using namespace std;
void rev(string &word){
int l=0;
int r=word.length()-1;
//Hum right pointer ko n - 1 se start isliye karte hain kyunki:
//👉 Array / string indexing 0 se start hoti hai
// so if str= "sanya" then indexing will be s=0, a=1, n=2, y=3, a=4 
while(l<=r)
{
char temp=word[l];
word[l]=word[r];
word[r]=temp;
l++;
r--;
}
}
int main(){
    string word;
cout<<"enter a word-";
getline(cin, word);
rev(word);
cout<<"reversed-"<<word;
}

/* 
input- 2 hello world
//output-
olleh
dlrow 
*/









