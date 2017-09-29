//created by Madeline Bird
//created on Tuesday, Sep. 28, 2017
/*Description: Lab 2.4 -  Function Returns
  Creating functions that, when called, produces a random number between two 
  values of the user’s choice and then converts the number into kilograms and 
  then back into pounds.  Program must collect user input for the two 
  values and use the swap function.*/
//Citation and References: zybooks chapter 10

 #include <iostream> // include proper libraries
 #include <cstdlib>  // Enables use of s/rand() functions
 #include <ctime>    // Enables use of time() function
 using namespace std;
 
 int RandNumGen(int minnum, int maxnum) {  // declare and define random number generating function
     int randnum = 0.0; // initialize variables
     int num1 = 0;
     int num2 = 0;
     
     num1 = minnum; //assign parameters to temp variables
     num2 = maxnum;
     
     minnum = num2; //swap numbers
     maxnum = num1;
     
     srand(time(0)); //unique seed so a new random number is generated
     randnum = (rand() % (minnum-maxnum + 1)) + maxnum; // between minnum and maxnum
     
     return randnum; // return the random number

 };
 
 double PoundsToKilos(double pounds){ // declare and define pounds to kilos function
     double kilos = 0.0; //initialize local variable
     
     kilos = pounds * 2.2046; // calculate kilograms from random number
     
     return kilos; // return kilograms
 };
 
 double KilosToPounds(double kilos){ // declare and define kilos to pounds function
     double pounds = 0.0; //initialize local variable
     
     pounds = kilos * 0.4536; // calculate pounds from kilograms
     
     return pounds; // return pounds
 };
 
 int main(){
     int minnumber = 0;  // initialize variables
     int maxnumber = 100;
     int randnumber = 0;
     double poundsnum = 0.0;
     double kilograms = 0.0;
     
     //prompt user for input
     cout << "Enter two numbers, smallest one first, separate by a space:" << endl;
     cin >> minnumber >> maxnumber;
     
     randnumber = RandNumGen(minnumber, maxnumber); //call rand num function and assign returned value to variable
     kilograms = PoundsToKilos(randnumber); // call kilos function with stored value and assign returned value to variable
     poundsnum = KilosToPounds(kilograms); //call pounds function with stored value and assign returned value to variable
     
     //output
     cout << "Random Nunmber: " << randnumber << endl;
     cout << "Kilograms:      " << kilograms << endl;
     cout << "Pounds:         " << poundsnum << endl;
     
     return 0;
 };
 
 /* test output
    Running /home/ubuntu/workspace/lab24/lab24.cpp
    Enter two numbers, smallest one first, separate by a space:
    2 20
    Random Nunmber: 3
    Kilograms:      6.6138
    Pounds:         3.00002
 */
 
 /* test output
    Running /home/ubuntu/workspace/lab24/lab24.cpp
    Enter two numbers, smallest one first, separate by a space:
    100 200
    Random Nunmber: 152
    Kilograms:      335.099
    Pounds:         152.001
 */