/*if else */
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"give any value"<<endl;
    cin>>a;
    if(a>0){
        cout<<"positive"<<endl;
    }
    else{
        cout<<"negative"<<endl;
    }
return 0;

}
/*cin*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"value of a and b is "<<a<<" "<<b<<" "<<endl;
}
/*cin.get()*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    a=cin.get();
    cout<<"value of a is"<<a<<endl;

}