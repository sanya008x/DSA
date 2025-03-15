//input and print n numbers in array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
        cout << "Enter " << n << " elements: ";

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    
// 2-D array
#include<iostream>
using namespace std;
int main(){
    int a[10][10],i,j,m,n;
    cout<<"enter rows(m)- ";
    cin>>m;
    cout<<"enter columns(n)- ";
    cin>>n;
    cout<<"enter m x n elements- ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
    