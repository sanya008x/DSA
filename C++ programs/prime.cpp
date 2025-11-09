//using while loop

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n)
    {
    if(n%i==0)
    {
        cout<<"composite number for "<<i<<endl;
    }
    else
    {
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
    
/*agar n tak jayege to time complexity badh jayegi isliye root n tak hi jate hai code 
optimize ho jayega

#include<bits/stdc++.h>
using namespace std;
void check(int num)
{
    for(int i=2; i*i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<"false";
        
            return;
        }
    }
    cout<<"true";
    return 0;


}
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
while(n--){
    int num;
    cin>>num;
    check(num);
    cout<< endl;


}*/

#include<bits/stdc++.h>
using namespace std;

void check(int num) {
    if (num <= 1) {  // handle 1 and negative numbers
        cout << "false";
        return;
    }
    
    for(int i = 2; i*i <= num; i++) {  // fixed increment operator
        if(num % i == 0) {
            cout << "false";
            return;
        }
    }
    cout << "true";
    return;  // removed return 0 as void function
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while(n--) {
        int num;
        cin >> num;
        check(num);
        cout << endl;
    }
    return 0;
}

