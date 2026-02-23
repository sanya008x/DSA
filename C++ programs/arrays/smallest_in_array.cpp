//prog to print minimum element in an array
#include <iostream>
using namespace std;
int main(){
    //input from user
    int n; // n represents the size of the array
    cout<<"eneter the size of the array- ";
    cin>>n; //n=5
    int array[n];
    for(int i=0;i<n;i++){
            // {80 92 89 90 34 }
           cin>>array[i];
        }
        
        int minimum=array[0];
        for(int i=1;i<n;i++){
             if(minimum>array[i])
             minimum = array[i];
            }
            cout<<minimum;
            return 0;
}