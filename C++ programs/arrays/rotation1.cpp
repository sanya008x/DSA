//left rotate the array by 1 this means that is an array is given
// eg. Input:  [1 2 3 4 5] Output: 2 3 4 5 1.  //rotate the array 1 2 3 4 5 --> 54321

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int temp= arr[0]; //abhi ke liye first element ko store krenge 
   for(int i=1;i<n;i++){ // to ab second index se chalu krenge esliye i=1 liya hai
     arr[i-1]=arr[i]; //	arr[0] = arr[1]; 	arr[1] = arr[2]
   }
arr[n-1]=temp; //first vale element ko last index me daal rhe hai
     for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}























































/* #include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 int temp=arr[0];
  
for(int i=1;i<n;i++){       //1 2 3 4 5 
     arr[i-1]=arr[i];
}
arr[n-1]=temp;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

} */



