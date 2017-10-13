//created by Madeline Bird
//created on Wednesday, October 12, 2017
/*Description: Lab 3.2 Switch Case
  Creating a program that uses switch case statements to calculate income tax
  based on filing status, gross wages, and tax withheld.*/
//Citation and References: 

 #include <iostream> // include proper libraries
 #include <string> // include the string library for string variables
 using namespace std;
 
 const int PERS_EXEMPT = 4050; // constant variable for personal exemption
 
 /* define switch case function to calculate AGI based on marital filing status
 and gross wages*/
 int AGI (char maritalstatus, int grosswages) {
     int adjincome = 0; // initialize local variable
     
     switch (maritalstatus) {
         case 's': // if single, deduct 6350 from wages minus personal exemption
            adjincome = grosswages - PERS_EXEMPT - 6350;
            break;
         case 'm': // if married, deduct 12700 from wages minus personal exemption
            adjincome = grosswages - PERS_EXEMPT - 12700;
            break;
         default:
            adjincome = 0;
            break;
     }
     
     return adjincome;
 }
 
 // define conditional function to calculate total tax dependent on AGI and status
 double IncTax (double adjgrossinc, char maritalstatus) {
     double tax = 0; // initialize loca variable
     
     if (maritalstatus == 's') { // if filing status is single: 
         if (adjgrossinc < 0) { // and if AGI < 0, tax = 0
             tax = 0;
         }
         else if (adjgrossinc <= 9325) { //else if AGI <= 9325, 10% tax
             tax = adjgrossinc * 0.1;
         }
         // else if AGI <= 37950, 932.5 + 15% tax on AGI - 9325
         else if (adjgrossinc <= 37950) {
             tax = 932.5 + (0.15 * (adjgrossinc - 9325));
         }
         // else if AGI <= 91900, 5226.25 + 25% tax on AGI - 37950
         else if (adjgrossinc <= 91900) {
             tax = 5226.25 + (0.25 * (adjgrossinc - 37950));
         }
         // else if AGI <= 191650, 18713.75 + 28% tax on AGI - 91900
         else if (adjgrossinc <= 191650) {
             tax = 18713.75 + (0.28 * (adjgrossinc - 91900));
         }
         // else if AGI <= 416700, 46643.75 + 33% tax on AGI - 191650
         else if (adjgrossinc <= 416700) {
             tax = 46643.75 + (0.33 * (adjgrossinc - 191650));
         }
         // else, 120910.25 + 39.6% tax on AGI - 416700
         else {
             tax = 120910.25 + (0.396 * (adjgrossinc - 416700));
         }
     }
     else if (maritalstatus == 'm') { // else if status is married
         if (adjgrossinc < 0) { // and if AGI < 0, tax = 0
             tax = 0;
         }
         else if (adjgrossinc <= 18650) { //else if AGI <= 18650, 10% tax
             tax = adjgrossinc * 0.1;
         }
         // else if AGI <= 75900, 1865 + 15% tax on AGI - 18650
         else if (adjgrossinc <= 75900) {
             tax = 1865 + (0.15 * (adjgrossinc - 18650));
         }
         // else if AGI <= 153100, 10452.5 + 25% tax on AGI - 75900
         else if (adjgrossinc <= 153100) {
             tax = 10452.50 + (0.25 * (adjgrossinc - 75900));
         }
         // else if AGI <= 233350, 29752.5 + 28% tax on AGI - 153100
         else if (adjgrossinc <= 233350) {
             tax = 29752.50 + (0.28 * (adjgrossinc - 153100));
         }
         // else if AGI <= 416700, 52222.5 + 33% tax on AGI - 233350
         else if (adjgrossinc <= 416700) {
             tax = 52222.5 + (0.33 * (adjgrossinc - 233350));
         }
         // else, 112728 + 39.6% tax on AGI - 416700
         else {
             tax = 112728 + (0.396 * (adjgrossinc - 470700));
         }
     }
     else { // if filing status is not s or m, then tax = 0;
         tax = 0;
     }
     
     return tax;
 }
 
 // define if function to determine how much a filer owes or should be refunded
 void OweRefund (int totaltax, int taxwithheld) {
     if (totaltax <= taxwithheld) { // total tax is <= tax withheld, refund difference
         cout << "Refund amount: $" << taxwithheld - totaltax << endl;
     }
     else { // els if total tax is greater than tax withheld, amount owed
         cout << "You owe: $" << totaltax - taxwithheld << endl;
     }
     
     return; 
 }
 
 int main() {
     string fname = "First Name"; // initialize variables for user input
     string lname = "Last Name";
     int grosswages = 0;
     int taxwithheld = 0;
     char filingstatus = 'x';
     int agi = 0; // initialize variables to store returned values
     double totaltax = 0.0;
     
     // Prompt for user input
     cout << "Enter your first and last name: " << endl;
     cin >> fname >> lname;
     cout << endl << "Enter your gross wages: " << endl;
     cin >> grosswages;
     cout << endl << "Enter your tax withheld: " << endl;
     cin >> taxwithheld;
     cout << endl << "Enter your filing status: s for single or m for married" 
        << endl;
     cin >> filingstatus;
     
     // call functions and assign returned values to variables
     agi = AGI(filingstatus, grosswages);
     totaltax = IncTax(agi, filingstatus);
     
     // output name, AGI, and refund or tax owed
     cout << endl;
     cout << "Name: " << fname << " " << lname << endl;
     cout << "Total AGI: $" << agi << endl;
     OweRefund(totaltax, taxwithheld);
     
     return 0;
 };
 
 
 /* Output #1
 Running /home/ubuntu/workspace/lab32/lab32.cpp
Enter your first and last name: 
Joe Vandal

Enter your gross wages: 
12100

Enter your tax withheld: 
250

Enter your filing status: s for single or m for married
s

Name: Joe Vandal
Total AGI: $1700
Refund amount: $80
*/

/* Output #2
Running /home/ubuntu/workspace/lab32/lab32.cpp
Enter your first and last name: 
Alfonso Haynes

Enter your gross wages: 
32351

Enter your tax withheld: 
3192

Enter your filing status: s for single or m for married
m

Name: Alfonso Haynes
Total AGI: $15601
Refund amount: $1632
*/

/* Output #3
Running /home/ubuntu/workspace/lab32/lab32.cpp
Enter your first and last name: 
Bridget Rowe

Enter your gross wages: 
88229

Enter your tax withheld: 
12057

Enter your filing status: s for single or m for married
s

Name: Bridget Rowe
Total AGI: $77829
You owe: $3139
*/
 
 
/* Output #4
Running /home/ubuntu/workspace/lab32/lab32.cpp
Enter your first and last name: 
Wendy Joseph

Enter your gross wages: 
73291

Enter your tax withheld: 
6972

Enter your filing status: s for single or m for married
m

Name: Wendy Joseph
Total AGI: $56541
You owe: $576
*/