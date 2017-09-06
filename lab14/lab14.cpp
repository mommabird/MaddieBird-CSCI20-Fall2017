//created by Madeline Bird
//created on Tuesday, Sep. 5, 2017
//Description: Floating Point program
//Citation and References: none

 #include <iostream>
 using namespace std;
 
 int main()
 {
     int numQuarters = 0; // Dc = Declaring variables for counts of coin type
     int numDimes    = 0; // Dc
     int numNickels  = 0; // Dc
     int numPennies  = 0; // Dc
     
     int valQuarters = 25; // Dv = Declaring variables for values of coin type
     int valDimes    = 10; // Dv
     int valNickels  =  5; // Dv
     int valPennies  =  1; // Dv
     
     int centsEntered = 0; // Declaring input integer variable
     int cents        = 0; // Declaring cents variable, which will later be get the input value
     
     cout << "Please enter total cents:" << endl; // asking user to enter a cents value
     cin >> centsEntered;  // collecting user's input value and storing into centsEntered variable
     
     cents = centsEntered; // cents variable gets centsEntered value so it can be used later while leaving the entered value unchanged
     
     numQuarters = cents/valQuarters; // calculating number of quarters from cents entered
     cents = cents%valQuarters;       // calculating remaining number of cents and reassigning value into the cents variable
     numDimes = cents/valDimes;       // calculating number of dimes from reassigned reamining cents
     cents = cents%valDimes;          // calculating remaining number of cents and reassigning value into the cents variable
     numNickels = cents/valNickels;   // calculating number of nickels from reassigned remaining cents
     numPennies = cents%valNickels;   // calculating number of pennies from reassigned remaining cents using modulo nickels
     
     double valTotal = centsEntered / 100.00;  // calculating the total value entered into a currency format (double)
     double valPaid = valTotal * 0.891;        // calculating the total value paid after a 10.9% fee (100 - 10.9 = 0.891)
     
     cout << "You have entered " << centsEntered << " cents." << endl;      // printing output to remind user what they entered
     cout << "That was " << numQuarters << " quarters, "                    // printing output to tell user how many quarters, dimes, nickels, and pennies this equals
        << numDimes << " dimes, " << numNickels << " nickels, and "         
        << numPennies << " pennies." << endl;
     cout << "The total is $" << valTotal << ". After the fee you get $"    // printing output to tell user how much they entered in dollars and cents and how much they are paid after the fee
        << valPaid << "." << endl;
        
/* Test 1: 105
Please enter total cents:
105
You have entered 105 cents.
That was 4 quarters, 0 dimes, 1 nickels, and 0 pennies.
The total is $1.05. After the fee you get $0.93555.
*/


/* Test 2: 3459
Please enter total cents:
3459
You have entered 3459 cents.
That was 138 quarters, 0 dimes, 1 nickels, and 4 pennies.
The total is $34.59. After the fee you get $30.8197.
*/


/* Test 3: 987654321
Please enter total cents:
987654321
You have entered 987654321 cents.
That was 39506172 quarters, 2 dimes, 0 nickels, and 1 pennies.
The total is $9.87654e+06. After the fee you get $8.8e+06.
*/


     
}