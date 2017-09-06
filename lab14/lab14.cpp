 #include <iostream>
 using namespace std;
 
 int main()
 {
     int numQuarters = 0;
     int numDimes    = 0;
     int numNickels  = 0;
     int numPennies  = 0;
     
     int valQuarters = 25;
     int valDimes    = 10;
     int valNickels  =  5;
     int valPennies  =  1;
     
     int centsEntered= 0;
     int cents       =   0;
     
     cout << "Please enter total cents:" << endl;
     cin >> centsEntered;
     
     cents = centsEntered;
     
     numQuarters = cents/valQuarters;
     cents = cents%valQuarters;
     numDimes = cents/valDimes;
     cents = cents%valDimes;
     numNickels = cents/valNickels;
     numPennies = cents%valNickels;
     
     double valTotal = centsEntered / 100.00;
     double valPaid = valTotal * 0.899;
     
     cout << "You have entered " << centsEntered << " cents." << endl;
     cout << "That was " << numQuarters << " quarters, "
        << numDimes << " dimes, " << numNickels << " nickels, and "
        << numPennies << " pennies." << endl;
     cout << "The total is $" << valTotal << ". After the fee you get $"
        << valPaid << "." << endl;

     
}