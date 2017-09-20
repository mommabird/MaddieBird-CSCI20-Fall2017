//created by Madeline Bird
//created on Tuesday, Sep. 19, 2017
/*Description: Lab 2.1 - Calling Functions
  Calculating windchill using functions and calling them*/
//Citation and References: http://www.cplusplus.com/reference/cmath/

 #include <iostream> // include proper libraries
 #include <math.h>  // have to include math functions library
 using namespace std;
 
 int main()
 {
     double outsidetemp   = 0; //declaring variables
     double windspeed     = 0;
     double oldwindchill  = 0;
     double newwindchill  = 0;
     double windchilldiff = 0;
     
     cout << "Enter the outside temperature in Farenheit:" << endl; //get user temperature
     cin >> outsidetemp;
     cout << "Enter the current wind speed:" << endl; //get user wind speed
     cin >> windspeed;
     
     //calculate Wind Chill from old formula
     oldwindchill = (0.081 * ((3.71 * sqrt(windspeed)) + 5.81 - (0.25 * windspeed)) 
        * (outsidetemp - 91.4)) + 91.4;
    
     //calculate Wind Chill from new formula
     newwindchill = 35.74 + (0.6215 * outsidetemp) - (35.75 * pow(windspeed,0.16))
        + (0.4275 * outsidetemp * pow(windspeed,0.16));
        
     windchilldiff = newwindchill - oldwindchill; //calculate difference between formulas
     
     cout << endl; //space between user input and output
     cout << "Wind Speed     Old Formula     New Formula     Difference" << endl;//output
     cout << windspeed << "              " << oldwindchill << "          " 
     << newwindchill << "         " << windchilldiff << endl;
 }


/* Input 1
    Running /home/ubuntu/workspace/lab21/lab21.cc
    Enter the outside temperature in Farenheit:
    30
    Enter the current wind speed:
    4
    
    Wind Speed     Old Formula     New Formula     Difference
    4              30.5753          25.767         -4.8083
 */
 
 /* Input 2
    Running /home/ubuntu/workspace/lab21/lab21.cc
    Enter the outside temperature in Farenheit:
    39.25
    Enter the current wind speed:
    10
    
    Wind Speed     Old Formula     New Formula     Difference
    10              27.8601          32.713         4.85286
 */
 
 /* Input 3
    Running /home/ubuntu/workspace/lab21/lab21.cc
    Enter the outside temperature in Farenheit:
    100
    Enter the current wind speed:
    2
    
    Wind Speed     Old Formula     New Formula     Difference
    2              98.7538          105.711         6.95719
 */