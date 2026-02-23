#include <iostream>
#include<string>
using namespace std;
int main(){
    
    string str;
    cin>>str;
    int n=str.length();
    int left=0;
    int right=n-1;
    while(left<right){
        if(str[left]!=str[right]){
            cout<<"not a palindrome";
            left++;
            right--;
        }
    }
    return 0;
}
