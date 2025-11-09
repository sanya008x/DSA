/*✅ What the Program Does
	1.	A jar has 10 candies.
	2.	A user can ask for 1 to 5 candies only.
	3.	If the user asks for more than 5 → Invalid Input.
	4.	If candies left become 5 or less, the jar is refilled back to 10 */

    #include <iostream>
using namespace std;

int main() {
    int N = 10, k = 5; // N = total candies in jar, k = max request allowed
    int num;           // number of candies requested by user

    cin >> num;

    if (num >= 1 && num <= k) {
        cout << "NUMBER OF CANDIES SOLD : " << num << endl;
        N = N - num; //update candies left in jar
        cout << "NUMBER OF CANDIES LEFT : " << N << endl; //display candies left

        // Refill condition
        //	•	If candies left are 5 or less, jar is refilled to 10

        if (N <= 5) {
            N = 10;
            cout << "Jar refilled. Candies now : " << N << endl;
        }
    } 
    else {
        cout << "INVALID INPUT" << endl;
        cout << "NUMBER OF CANDIES LEFT : " << N << endl;
    }
    return 0;
}
