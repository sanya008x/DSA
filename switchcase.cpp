//calculator
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter 1st num="<<endl;
    cin>>a;
    cout<<"enter 2nd num="<<endl;
    cin>>b;
    char op;
    cout<<"enter operation- "<<endl;
    cin>>op;
    switch(op)
    {
    case '+':
    cout<<a+b<<endl;
    break;
    case '-':
    cout<<a-b<<endl;
    break;
    case '*':
    cout<<a*b<<endl;
    break;
    case '/':
    cout<<a/b<<endl;
    break;
    default:cout<<"enter a valid choice"<<endl;
    }
    return 0;
}

