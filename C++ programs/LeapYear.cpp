#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if((year%4==0 && year%100!=0) || (year%400==0)){
        cout<<year<<" is a leap year."<<endl;
    }
    else{
        cout<<year<<" is not a leap year."<<endl;
    }   
}

//4,8,12,16.....96 tk leap year hai par 100 wala nahi hoga
//A year is a leap year if it is divisible by 4,
//except years divisible by 100 are NOT leap years but years divisible by 400 ARE leap years.

#include<iostream>
using namespace std;
void solve(){
if (year%4==0){

 if (year%100==0)
 {
    if(year%400==0){
        cout<<"true";
    }
 }
}
else{
    cout<<"false";
}
else{
    cout<<"false";
}

ios::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
while(n--){
    int year;
    cin>>year;
    solve(year);
    cout<< endl;
return 0;
}

