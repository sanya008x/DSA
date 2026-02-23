//find the maximum element in an array taking input from user

#include <iostream>
using namespace std;
int main()
{
  cout<<"hello, we will find the max no. and then print it...please give your input";
  // the input is the size of array
  int n;
  cin>>n;
  int array[n];
  //input values of array from user 
  cout<<"please enter the elements for your array";
  for(int i=0;i<n;i++){
      cin>>array[i];
  }
  
  int maximum=array[0];
  for(int i=1;i<n;i++){
      if(maximum<array[i]){
          maximum=array[i];
          }
  
  }
  cout<<"maximum element in your array is- "<<maximum;
  return 0;
  
}

