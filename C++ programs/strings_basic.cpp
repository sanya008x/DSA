#include<iostream>
using namespace std;
int main ()
{
char arr[10];
cin>>arr;
for(int  )
 {
 cout<<arr[i]<<endl;
 }
return 0;
}
//output is shown as below
/* love
l
o
v
e
         //here after love there is a space which shows null char as we gave the array.
          size 10 and input 4 char sot he compiler fills in the garbage values for the rest of the space.

P
a */

//The regular cin >> operator stops reading at the first whitespace (space, tab, or newline).
//So if you input Hello World, cin >> will only store Hello and ignore the rest.
/*cin.getline() reads the entire line, including spaces, until it hits a newline (\n).*/

char name[50];
    cout << "Enter your full name: ";
    cin.getline(name, 50);
    cout << "Hello, " << name << "!" << endl;
    //input-John Doe
//output- Hello, John Doe
#include <iostream>
using namespace std;
int main () 
{
char arr[60];
cin.getline(arr,10,'X');
cout << arr << endl;
    return 0;
}


//output-
//admkoasXjkldslj
//admkoas delimeter is X therefore char after 'X' is not printed























