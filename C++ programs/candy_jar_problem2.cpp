/*	
There is a JAR full of candies for sale at a mall counter. J
AR has the capacity N that is JAR can contain maximum N candies when JAR is full. 
At any point of time, JAR can have M number of Candies where M<=N. Candies are served to the customers. 
JAR is never remaining empty as when last k candies are left. 
JAR if refilled with new candies in such a way that JAR get full.
Write a code to implement above scenario. Display JAR at counter with available number of candies. 
Input should be the number of candies one customer can order at point of time. 
Update the JAR after each purchase and display JAR at Counter.
Output should give number of Candies sold and updated number of Candies in JAR.
If Input is more than candies in JAR, return: “INVALID INPUT”
Given,
N=10, where N is NUMBER OF CANDIES AVAILABLE
K =< 5, where k is number of minimum candies that must be inside JAR ever.
Example 1:(N = 10, k =< 5)
• Input Value
○ 3
• Output Value
○ NUMBER OF CANDIES SOLD : 3
○ NUMBER OF CANDIES AVAILABLE : 7
Example : (N=10, K<=5)
• Input Value
○ 0
• Output Value
○ INVALID INPUT
○ NUMBER OF CANDIES LEFT : 10
*/

#include <iostream>
using namespace std;

int main() 
{
    int n=10;
    int k=5;
    int num;
    cin>>num;
    
    if(num>=1 && num<=n)
    {
      n=n-num;
      cout<<"NUMBER OF CANDIES SOLD : "<<num<<endl;
      cout<<"NUMBER OF CANDIES AVAILABLE : "<<n;
          cout<<endl;

       if(k>=n)
       { 
         n=10;
         cout<<"Jar refilled to "<<n; //this line is not asked in question but added for clarity
       }
    }
    else
    {
      cout<<"INVALID INPUT"<<endl;
      cout<<"NUMBER OF CANDIES LEFT : "<<n;
    }
    return 0;
}