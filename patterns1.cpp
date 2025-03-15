/*
***
***
***
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
    while(j<=n){
        cout<<"*";
        j=j+1;
    }
        cout<<endl;
    i=i+1;
    }
}
/*
  111
  222
  333
  */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
    while(j<=n){
        cout<<" "<<i; //print i
        j=j+1;
    }
        cout<<endl;
    i=i+1;
    }
}


/*
123
123
123
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
    while(j<=n){
        cout<<" "<<j; //print j
        j=j+1;
    }
        cout<<endl;
    i=i+1;
    }
}
/*
4321
4321
4321
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
    while(j<=n){
        cout<<" "<<n-j+1; //print n-j+1
        j=j+1;
    }
        cout<<endl;
    i=i+1;
    }
}
/*
1  2  3  4 
5  6  7  8
9 10 11 12
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1; //taking a var count which increments itself
    int i=1;
    while(i<=n){
        int j=1;
    while(j<=n){
        cout<<count<<"  ";
        count=count+1; //the value printed is count + 1,count increments in every iteration.
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
}
/*
*
**
***
****
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1; //no. of stars in a row= row no.
    while(j<=i){ //number of cols= no of rows
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
}
/*
987
654
321
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=n*n;  //starts from highest number
    int i=1;
    while(i<=n){
        int j=1;
    while(j<=n)
    {
        cout<<count<<" ";
        count=count-1; //count decrements
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
}
/*
1
22
333
4444
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){ //no. of cols=no. of rows
            cout<<" "<<i; //row no. is being printed
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
/*
1
23
456
78910
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<" "<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
i=i+1;
    }
}
/*//here each row is starting with the row number itself
1
23
345
4567
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
            int count=i; //taking a var for row no. which increments itself after every row
        while(j<=i){
            cout<<" "<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
i=i+1;
    }
}
/*reverse order
1
21
321
4321
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
            int count=i; //taking a var for row no. which increments itself after every row
        while(j<=i){
            cout<<" "<<count;
            count=count-1;// count decrements itself
            j=j+1;
        }
        cout<<endl;
i=i+1;
    }
}

