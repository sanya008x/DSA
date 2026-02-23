// to find hcf we use repeated subtraction method
// subtract the smaller no from larger no until both numbers are same
// eg. find hcf of (12,20)
// 20-12=8; (12,8)
// 12-8=4; (8,4)
// 8-4=4; (4,4)
// therefore hcf is 4

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    while(a!=b){
    if(a>b){
       a= a-b;
    }
    else{
      b=  b-a;
    }
}
cout<<b ;
return 0;
}