/* There are 3 trainees.
	•	Each trainee runs 3 rounds and their oxygen levels are recorded (1–100).
	1.	Calculate the average oxygen level of each trainee.
	2.	display trainee(s) with the highest average.
	3.	If any trainee has an average less than 70, print:
“Trainee is Unfit”.*/

#include <iostream>
using namespace std;

int main() {
    int trainee[3][3]; //2D array to store oxygen levels of 3 trainees for 3 rounds
    int avg[3] = {0}; //int array with 3 elements initialized to 0.
    int maxAvg = 0; //variable to store maximum average

    // Taking input
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cin >> trainee[i][j];

            //If value <1 or >100 → invalid → replace with 0

            if (trainee[i][j] < 1 || trainee[i][j] > 100) 
            {
                trainee[i][j] = 0; // invalid readings set to 0
            }
        }
    }

    // Average for each trainee
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            avg[i] += trainee[i][j];
        }
        
        avg[i] /= 3;
        if (avg[i] > maxAvg)
            maxAvg = avg[i];
    }

    // Display highest average trainees
    for (int i = 0; i < 3; i++) {
        if (avg[i] == maxAvg) {
            cout << "Trainee Number : " << i + 1 << endl;
        }
    }

    // Fitness check
    for (int i = 0; i < 3; i++) {
        if (avg[i] < 70) {
            cout << "Trainee is Unfit" << endl;
        }
    }

    return 0;
}

/*
INPUT-

95 92 93
45 50 55
90 88 92 

 OUTPUT-

Trainee Number : 1
Trainee Number : 3
Trainee is Unfit   // (for trainee 2)

*/

