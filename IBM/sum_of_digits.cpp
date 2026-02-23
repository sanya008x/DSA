#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;  //n=534
    int sum=0;
    while(n>0){
       int digit=n%10; // 534/10=53; rem=4
       sum= sum+digit; // sum=0+4=4
       n=n/10; // 534/10=53
    }
    cout<<sum;
    return 0;
}