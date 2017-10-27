//created by Madeline Bird
//created on Thursday, October 26, 2017
/*Description: Assignment - Games
  Creating a class with constructors that plays the Hi-Ho Cherry-O game with
  the computer.*/
//Citation and References: 

 #include <iostream> // include proper libraries
 #include <string> // include the string library for string variables
 #include <cstdlib>  // Enables use of s/rand() functions
 using namespace std;
 
 class CompRole { //declare class for computer
     public:
        void SetTurn (int compturn, int compscore); //mutator function for computer turn and score
        int GetTurn(); //accessor function for computer turn
        int GetScore(); //accessor function for computer score
        void Print(); // print function
        CompRole(); //default constructor sets score and turn each to 0
     
     private:
        int turn_; //declare turn variable for computer
        int score_; //declare score variable for computer
     
 };
 
 class PlayerRole { //declare class for player
     public:
        void SetTurn (int playerturn, int playerscore); //mutator function for player turn and score
        int GetTurn(); //accessor function for player turn
        int GetScore(); //accessor function for player score
        void Print(); // print function
        PlayerRole(); //default constructor sets score and turn each to 0
     
     private:
        int turn_; //declare turn variable for player
        int score_; //declare score variable for player
     
 };
 
 CompRole::CompRole() { // default constructor
     turn_ = 0; //sets computer turn to 0
     score_ = 0; //sets computer score to 0
 }
 
 PlayerRole::PlayerRole() { // default constructor
     turn_ = 0; //sets player turn to 0
     score_ = 0; //sets player score to 0
 }
 
 void CompRole::SetTurn(int compturn, int compscore) { //mutator function 
     turn_ = compturn + 1; //increments turn by 1
     int spin = 0; // initializes local spin variable
     
     spin = (rand()%7)+1; //limits spin options to 7
     
     switch (spin) { //case statement for each spin outcome; 5 and 6 are the same
          case 1:
            score_ = compscore + 1;
            break;
          case 2:
            score_ = compscore + 2;
            break;
          case 3:
            score_ = compscore + 3;
            break;
          case 4:
            score_ = compscore + 4;
            break;
          case 5:
          case 6:
            if(compscore >= 2) {
                score_ = compscore - 2;
            }
            else if (compscore == 1) {
                score_ = compscore - 1;
            }
            else {
                score_ = 0;
            }
            break;
          case 7:
            score_ = 0;
            break;
          default:
            score_ = compscore;
            break;
     }
 }
 
 void PlayerRole::SetTurn(int playerturn, int playerscore) {//mutator function 
     turn_ = playerturn + 1; //increments turn by 1
     int spin = 0; // initializes local spin variable
     
     spin = (rand()%7)+1; //limits spin options to 7
     
     switch (spin) { //case statement for each spin outcome; 5 and 6 are the same
          case 1:
            score_ = playerscore + 1;
            break;
          case 2:
            score_ = playerscore + 2;
            break;
          case 3:
            score_ = playerscore + 3;
            break;
          case 4:
            score_ = playerscore + 4;
            break;
          case 5:
          case 6:
            if(playerscore >= 2) {
                score_ = playerscore - 2;
            }
            else if (playerscore == 1) {
                score_ = playerscore - 1;
            }
            else {
                score_ = 0;
            }
            break;
          case 7:
            score_ = 0;
            break;
          default:
            score_ = playerscore;
            break;
     }
 }
 
 int CompRole::GetTurn () { //getter function to get comp turn
     return turn_;
 }
 
 int PlayerRole::GetTurn () { //getter function to get player turn
     return turn_;
 }
 
 int CompRole::GetScore () { //getter function to get comp score
     return score_;
 }
 
 int PlayerRole::GetScore () { //getter function to get player score
     return score_;
 }
 
 void CompRole::Print () { // print fucntion for computer role stats
     cout << endl << "At the end of turn " << GetTurn() << " computer score is "
          << GetScore() << "." << endl;
 }
 
 void PlayerRole::Print () { // print fucntion for computer role stats
     cout << "At the end of turn " << GetTurn() << " player score is "
          << GetScore() << "." << endl;
 }
 
 int main () {
     string keepplaying = "Yes"; //initialize variable for userr input to keep playing
     int computerturn = 0; //initialize variable for computer turn to use in setter functions & output
     int playerturn = 0; //initialize variable for player turn to use in setter functions & output
     int computerscore = 0; //initialize variable for computer turn to use in setter functions & output
     int playerscore = 0; //initialize variable for computer turn to use in setter functions & output
     
     CompRole comp; // define object for computer class
     PlayerRole player; // define object for player class
     
     srand(time(0)); //unique seed so a new random number is generated
     
     /* while loop as long as there is no winner, user is prompted to keep playing
     and stores new turns and scores*/
     while ((computerscore < 10) && (playerscore < 10)) {
         cout << endl << "Would you like to continue playing? Type Yes or No." << endl;
         cin >> keepplaying;
         
         // if player decides to keep playing, go through another turn using setter functions
         if (keepplaying == "Yes") { 
             comp.SetTurn(computerturn, computerscore);
             player.SetTurn(playerturn, playerscore);
             comp.Print(); // prints computer turn and score
             player.Print(); // prints player turn and score
         }
         else { // if player decides not to keep playing, computer wins
            cout << endl << "You decided to stop playing. The computer automatiacally wins."
                 << endl;
         }
         
         computerscore = comp.GetScore(); // assign new computer Score
         playerscore = player.GetScore(); // assign new player Score
         computerturn = comp.GetTurn(); // assign new computer turn
         playerturn = player.GetTurn(); // assign new player turn
     }
     
     // if statement to determine sinner based on final scores, after exiting while loop.
     if (computerscore > playerscore) { 
         cout << endl << "The computer won this round. Press run to play again." << endl;
     }
     else if (computerscore < playerscore) {
         cout << endl << "You beat the computer! Press run to play again." << endl;
     }
     else {
         cout << endl << "You tied the computer. Press run to play again." << endl;
     }
 }
 
 /* Output #1
 Running /home/ubuntu/workspace/Assign_Game/assigngame.cpp

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 1 computer score is 0.
At the end of turn 1 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 2 computer score is 0.
At the end of turn 2 player score is 4.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 3 computer score is 0.
At the end of turn 3 player score is 6.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 4 computer score is 0.
At the end of turn 4 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 5 computer score is 1.
At the end of turn 5 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 6 computer score is 0.
At the end of turn 6 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 7 computer score is 1.
At the end of turn 7 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 8 computer score is 0.
At the end of turn 8 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 9 computer score is 0.
At the end of turn 9 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 10 computer score is 0.
At the end of turn 10 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 11 computer score is 0.
At the end of turn 11 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 12 computer score is 4.
At the end of turn 12 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 13 computer score is 6.
At the end of turn 13 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 14 computer score is 4.
At the end of turn 14 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 15 computer score is 2.
At the end of turn 15 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 16 computer score is 3.
At the end of turn 16 player score is 3.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 17 computer score is 5.
At the end of turn 17 player score is 1.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 18 computer score is 3.
At the end of turn 18 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 19 computer score is 1.
At the end of turn 19 player score is 2.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 20 computer score is 5.
At the end of turn 20 player score is 6.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 21 computer score is 3.
At the end of turn 21 player score is 10.
You beat the computer! Press run to play again.

*/

/* Output #2
Running /home/ubuntu/workspace/Assign_Game/assigngame.cpp

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 1 computer score is 0.
At the end of turn 1 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 2 computer score is 0.
At the end of turn 2 player score is 1.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 3 computer score is 4.
At the end of turn 3 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 4 computer score is 7.
At the end of turn 4 player score is 2.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 5 computer score is 0.
At the end of turn 5 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 6 computer score is 0.
At the end of turn 6 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 7 computer score is 0.
At the end of turn 7 player score is 1.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 8 computer score is 0.
At the end of turn 8 player score is 3.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 9 computer score is 1.
At the end of turn 9 player score is 4.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 10 computer score is 0.
At the end of turn 10 player score is 6.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 11 computer score is 3.
At the end of turn 11 player score is 4.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 12 computer score is 5.
At the end of turn 12 player score is 7.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 13 computer score is 3.
At the end of turn 13 player score is 9.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 14 computer score is 0.
At the end of turn 14 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 15 computer score is 4.
At the end of turn 15 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 16 computer score is 2.
At the end of turn 16 player score is 1.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 17 computer score is 6.
At the end of turn 17 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 18 computer score is 7.
At the end of turn 18 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 19 computer score is 10.
At the end of turn 19 player score is 2.

The computer won this round. Press run to play again.
*/

/*Output #3
Running /home/ubuntu/workspace/Assign_Game/assigngame.cpp

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 1 computer score is 2.
At the end of turn 1 player score is 1.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 2 computer score is 0.
At the end of turn 2 player score is 0.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 3 computer score is 4.
At the end of turn 3 player score is 1.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 4 computer score is 8.
At the end of turn 4 player score is 2.

Would you like to continue playing? Type Yes or No.
Yes

At the end of turn 5 computer score is 10.
At the end of turn 5 player score is 0.

The computer won this round. Press run to play again.
*/