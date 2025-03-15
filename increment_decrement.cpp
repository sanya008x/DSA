#include <iostream>
using namespace std;
int main()
{
//post increment

int a=8;
int b=5;
int sum= a + (b++); //original value of b is added to a and then incremented; 5
cout<<sum<<endl; //8+5=13
cout<<b<<endl; //now the value of b is incrememted ; 6

//pre increment

int c=4;
int d=9;
int sum1=c+(++d); //value of d first gets incremented and then added to c; 9+1=10
cout<<sum1<<endl; //4+10=14
cout<<d<<endl; //10

//post decrement

int e=10;
int f=5;
int sum2= e + (f--); //original value of f is added to a and then remented; 10+5=15
cout<<sum2<<endl; //15
cout<<f<<endl; //now the value of f is rememted ; 4

//pre decrement

int g=6;
int h=3;
int sum3=g+(--h); //value of h first gets remented and then added to g; 6+2=8 
cout<<sum3<<endl; //8
cout<<h<<endl; //2
}
