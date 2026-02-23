//prog to print second largest element in an array
#include <iostream>
using namespace std;
int main(){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      
      }
        int max=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>max)
            max=arr[i];
            }
            
            cout << max<<endl;
         int sec=-1;
          for(int i=0;i<n;i++){
                if(sec<arr[i] && arr[i]!=max)
                sec=arr[i];
                
                
              }
         cout<<"second largest element= "<<sec;
         return 0;
    }
    
   