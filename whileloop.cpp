#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<" "<<i;
        i=i+1;
        }
    
}
/*sum of n numbers using while loop*/
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1,sum=0;
while(i<=n){
    sum=sum+i;
    i=i+1;
}
    cout<<"sum of n numbers is "<<sum<<endl;

}

/*sum of n even numbers using while loop*/

#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cin>>n;
int i=2;
while(i<=n){
    sum=sum+i;
    i=i+2;
}
cout<<"sum of n even numbers is "<<sum;
}

