//using while loop

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
    if(n%i==0){
        cout<<"composite number for "<<i<<endl;
    }
    else{
    cout<<"prime number for "<<i<<endl;
    }
        i=i+1;
    }
}
//using for loop

#include <iostream>
using namespace std;
int main() {
    int i,n,t=1;
    cout << "Enter the number : ";
    cin >> n;
    for( i=2;i<n-1;i++){
        t=n%i;
        if(t==0){
            break;
        }
                       }
        if(t!=0){
            cout<<n<<" is a prime number"<<endl;
        }
        else{
            cout<<n<<" is a composite number"<<endl;
        }

}
    
