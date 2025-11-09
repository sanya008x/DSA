//greatest common divisor
#include<iostream>
using namespace std;

//Euclidean algorithm for GCD
/*EG . 70 and 129
129-70=59
70-59=11
59-11=48
48-11=37
37-11=26
26-11=15
15-11=4
11-4=7
7-4=3
4-3=1
3-1=2
2-1=1
1-1=0
//GCD is 1 */

int main()
{
    int a , b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
     int x =a; y=b;
    while(a!=0 && b!=0){
        if (a>b){
            a %= b;
        }
        else{
            b %= a;
        }

}

if (a==0)
{
    cout<<b<<endl;
}
else 
{
    cout<<a<<endl;
}

}

