//bitwise & | ~ ^
#include<iostream>
using namespace std;
int main(){
    int a=6;
    int b=8;
    cout<<"a&b= "<<(a&b)<<endl;
    cout<<"a|b= "<<(a|b)<<endl;
    cout<<"~a= "<<~a<<endl;
    cout<<"~b= "<<~b<<endl;
    cout<<"a^b= "<<(a^b)<<endl;
}
//left shift (<<) and right shift (>>) ops
#include<iostream>
using namespace std;
int main(){
    int a = 5;  // Binary: 00000101
    cout << "a << 1 = " << (a << 1) << endl;  // Left shift by 1; 5 << 1 = 5 * 2^1 = 10
    cout << "a << 2 = " << (a << 2) << endl;  // Left shift by 2; 5 << 2 = 5 * 2^2 = 20
    int b = 20; // Binary: 00010100
    cout << "b >> 1 = " << (b >> 1) << endl;  // Right shift by 1; 20 >> 1 = 20 / 2^1 = 10
    cout << "b >> 2 = " << (b >> 2) << endl;  // Right shift by 2; 20 >> 2 = 20 / 2^2 = 5
}

