// program to print the reverse of the array taking user input
// first input will be the size of array i.e. n and then the whole array elements
// n=6
 // 1 2 3 4 5 6
 // 6 5 4 3 2 1 

#include <iostream>
using namespace std;
void reversearray (int array[], int n) 
{
    int start=0;
    int end=n-1; //n-1=6-1= 5th element of the array
    while(start<end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
   // return ("success") // completely useless to return a value and hence
   // we do not use the return func
}
int main()
{
   int n;
   cin>>n;
   int array[n];
   for(int i=0;i<n;i++)
   {
    cin>>array[i];
   }
   reversearray(array,n);

        for(int i=0;i<n;i++)
     {
         cout<<array[i]<<" ";
     }

 }

