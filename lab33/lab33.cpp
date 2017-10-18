//created by Madeline Bird
//created on Tuesday, October 17, 2017
/*Description: Lab 3.3 - Loops
  Creating a number guessing game program that uses loops to point the user in 
  the right direction of guessing the correct number*/
//Citation and References: 

 #include <iostream> // include proper libraries
 #include <cstdlib>  // Enables use of s/rand() functions
 using namespace std;
 
 int main() {
     int usernum = 0;
     int compnum = 0;
     int i = 0;
     
     srand(time(0)); //unique seed so a new random number is generated
     compnum = (rand()%50)+1; //program randomly assigns number to compnum
     
     //prompt user for input and store in usernum
     cout << "Enter your guessed a number between 1 and 50: " << endl;
     cin >> usernum;
     
     /*until user enters a number less than 50 they will continue to be 
       prompted to enter a number between 1 and 50*/
     for (usernum; usernum > 50; usernum) {
         if ((usernum > 50) || (usernum < 1)) {
            cout << "Enter a number between 1 and 50: " << endl;
            cin >> usernum;
         }
     }
     
     /* while loop that starts as long as the user did not guess the correct
        number and the number of cycles has not exceded 10*/
     while ((usernum != compnum) && (i <= 10)) { 
         if(usernum > compnum) { // if guess is greater than number 
             cout << usernum << " is too high. Countdown: " << 10 - i //count
                 << ". Guess again: " << endl; //and tell user to guess again
             cin >> usernum; //assign new guess to usernum variable
         }
         else if(usernum < compnum) { // else if guess is greater than number 
             cout << usernum << " is too low. Countdown: " << 10 - i //count
                 << ". Guess again: " << endl; //and tell user to guess again
             cin >> usernum; //assign new guess to usernum variable
         }
         else { //else the guess equals the number so the loop should have exited
             cout << "The number was " << compnum << " and you guessed it!"
                    << endl;
         }
     ++i; // increase i by one to limit number of executions
     }
     cout << "The number was " << compnum << "!" << endl; // output number after loop ends
 }
 
 
 /* Output
 
 Running /home/ubuntu/workspace/lab33/lab33.cpp
Enter your guessed a number between 1 and 50: 
51
Enter a number between 1 and 50: 
52
Enter a number between 1 and 50: 
53
Enter a number between 1 and 50: 
25
25 is too low. Countdown: 10. Guess again: 
37
37 is too high. Countdown: 9. Guess again: 
31
31 is too high. Countdown: 8. Guess again: 
28
28 is too high. Countdown: 7. Guess again: 
26
The number was 26!

/*