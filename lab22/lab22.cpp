//created by Madeline Bird
//created on Tuesday, Sep. 21, 2017
/*Description: Lab 2.2 - Writing Functions
  Creating a function that, when called, produces a random number between 1 and 100.*/
//Citation and References: zybooks chapters 8 and 9

 #include <iostream> // include proper libraries
 #include <cstdlib>  // Enables use of s/rand() functions
 #include <ctime>    // Enables use of time() function
 using namespace std;
 
 int RandNumGen() {  // declare and define function
     int randnum = 0;
     
     srand(time(0)); //unique seed so a new random number is generated
     randnum = (rand() % 100) + 1; // 1 to 100
     
 };
 
 int main() {
     
     cout << "Your randum number is " << RandNumGen()  // function call
        << "." << endl;
     
     return 0;  // empty local variable
     
 };