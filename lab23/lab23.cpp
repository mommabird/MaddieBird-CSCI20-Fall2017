//created by Madeline Bird
//created on Tuesday, Sep. 26, 2017
/*Description: Lab 2.3 -  Function Input
  Creating a function that, when called, produces a random number between two 
  values of the user’s choice.  Program must collect user input for the two 
  values and use the swap function.*/
//Citation and References: zybooks chapters 9 and 10

 #include <iostream> // include proper libraries
 #include <cstdlib>  // Enables use of s/rand() functions
 #include <ctime>    // Enables use of time() function
 using namespace std;
 
 void RandNumGen(int minnum, int maxnum) {  // declare and define random number generating function
     int randnum = 0; // initialize variables
     int num1 = 0;
     int num2 = 0;
     
     num1 = maxnum; //swap numbers
     num2 = minnum;
     
     srand(time(0)); //unique seed so a new random number is generated
     randnum = (rand() % (num1-num2+1)) + num2; // between minnum and maxnum
     
     cout << "Your randum number is " << randnum << endl; //output statement

 };
 
 void SwapNumbers(int firstnum, int secondnum) { //declare and define swap function
     int number1 = 0; //initialize variables
     int number2 = 0;
     
     number1 = secondnum; //swap numbers
     number2 = firstnum;
     
     cout << "The two numbers entered were " << number2 << " and "
        << number1 << "." <<endl; //ouptut statement
        
 };
 
 int main() {
     int minnumber = 0; //initialize variables
     int maxnumber = 100;
     
     cout << "Enter two numbers separated by a space so the function can select a random number:" 
        << endl; // prompt user for input
     cin >> minnumber >> maxnumber;
     
     RandNumGen(minnumber, maxnumber); // function calls
     SwapNumbers(minnumber, maxnumber); 
        
     return 0;  // empty local variable
     
 };
 
 
 /* Output Test 1
    Running /home/ubuntu/workspace/lab23/lab23.cpp
    Enter two numbers separated by a space so the function can select a random number:
    1 10
    Your randum number is 9
    The two numbers entered were 1 and 10.
 */

 /* Output Test 2
    Running /home/ubuntu/workspace/lab23/lab23.cpp
    Enter two numbers separated by a space so the function can select a random number:
    5 82
    Your randum number is 60
    The two numbers entered were 5 and 82.
 */
 
 /* Output Test 2
    Running /home/ubuntu/workspace/lab23/lab23.cpp
    Enter two numbers separated by a space so the function can select a random number:
    22 73
    Your randum number is 54
    The two numbers entered were 22 and 73.
 */