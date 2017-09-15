//created by Madeline Bird
//created on Sunday, Sep. 10, 2017
/*Description: 1.0 Assignment - Calculator
  I'm doing calculator project one, which is creating a weekly paystub based on
  employee input, including mileage reimbursement, insurance cost and taxes.*/
//Citation and References: https://stackoverflow.com/questions/29997096/bold-output-in-c to learn how to print in bold

 #include <iostream> // include proper libraries
 #include <string>  // have to include string library
 using namespace std;
 
 
 struct PayStub{         // creating struct with 7 variables
     string firstName = "First";
     string lastName = "Last";
     int hrsWorked = 0;
     double hrlyPay = 0;
     double insuranceCost = 0;
     int odomStart = 0;
     int odomEnd = 0;
 };
     
 int main() 
 {
     PayStub employee1; // creating object for struct
     
     double grossPay = 0.0;  // initializing variables for calcutions with input
     const double TAX_RATE = 0.17;
     double totalTax = 0.0;
     double netPay = 0.0;
     int totalMiles = 0;
     const double CENTS_PER_MILE = 0.35;
     double mileageReimb = 0;
     double totalPay = 0.0;
     
     cout << "Please enter your name, first and last only (ex. John Smith):" << endl; //providing instructional output to collect employee info
     cin >> employee1.firstName >> employee1.lastName;
     cout << "Please enter the total hours worked this week:" << endl;
     cin >> employee1.hrsWorked;
     cout << "Please enter your hourly wage. \e[1mDO NOT\e[0m include the dollar symbol ($):" << endl;
     cin >> employee1.hrlyPay;
     cout << "Please enter your insurance cost. \e[1mDO NOT\e[0m include the dollar symbol ($):" << endl;
     cin >> employee1.insuranceCost;
     cout << "Please enter your odometer starting reading in whole miles:" << endl;
     cin >> employee1.odomStart;
     cout << "Please enter your odometer ending reading in whole miles:" << endl;
     cin >> employee1.odomEnd;
     
     grossPay = employee1.hrsWorked * employee1.hrlyPay;            // calculate gross pay
     totalTax = ((grossPay - employee1.insuranceCost) * TAX_RATE);  // calculate total taxes
     netPay = grossPay - employee1.insuranceCost - totalTax;        // calculate net pay
     totalMiles = employee1.odomEnd - employee1.odomStart;          // calculate total miles
     mileageReimb = totalMiles * CENTS_PER_MILE;                    // calculate mileage reimbursement
     totalPay = netPay + mileageReimb;                              // calculate total pay
     
     cout << "Employee Name:         \e[1m" << employee1.firstName << " " << employee1.lastName << endl; //beginning of pay stub output
     cout << "\e[0mHours worked:          " << employee1.hrsWorked << endl;
     cout << "Hourly wage:           $" << employee1.hrlyPay << endl;
     cout << "Gross Pay:             $" << grossPay << endl;
     cout << "Net Pay:               $" << netPay << endl;
     cout << "  Insurance Cost:        <$" << employee1.insuranceCost << ">" << endl;
     cout << "  Total Tax:             <$" << totalTax << ">" << endl;
     cout << "Mileage Reimbursement: $" << mileageReimb << endl;
     cout << "  Total Miles:           " << totalMiles << endl;
     cout << "  Mileage Rate:          $" << CENTS_PER_MILE << "/mile" << endl;
     cout << "\e[1mTotal Pay:             $" << totalPay << endl;
        
 };
     
 /* Output Test A.
 Running /home/ubuntu/workspace/Assmt_calculator/assmt_calc.cpp
Please enter your name, first and last only (ex. John Smith):
Sofia Cameron
Please enter the total hours worked this week:
40
Please enter your hourly wage. DO NOT include the dollar symbol ($):
23.57
Please enter your insurance cost. DO NOT include the dollar symbol ($):
178.65
Please enter your odometer starting reading in whole miles:
3268
Please enter your odometer ending reading in whole miles:
4154
Employee Name:         Sofia Cameron
Hours worked:          40
Hourly wage:           $23.57
Gross Pay:             $942.8
Net Pay:               $634.245
  Insurance Cost:        <$178.65>
  Total Tax:             <$129.906>
Mileage Reimbursement: $310.1
  Total Miles:           886
  Mileage Rate:          $0.35/mile
Total Pay:             $944.344
*/

/* Output Test B.
Running /home/ubuntu/workspace/Assmt_calculator/assmt_calc.cpp
Please enter your name, first and last only (ex. John Smith):
Richard Watson
Please enter the total hours worked this week:
29
Please enter your hourly wage. DO NOT include the dollar symbol ($):
11.5
Please enter your insurance cost. DO NOT include the dollar symbol ($):
344.57
Please enter your odometer starting reading in whole miles:
9763
Please enter your odometer ending reading in whole miles:
10701
Employee Name:         Richard Watson
Hours worked:          29
Hourly wage:           $11.5
Gross Pay:             $333.5
Net Pay:               $-9.1881
  Insurance Cost:        <$344.57>
  Total Tax:             <$-1.8819>
Mileage Reimbursement: $328.3
  Total Miles:           938
  Mileage Rate:          $0.35/mile
Total Pay:             $319.112
*/

/* Output Test C.
Running /home/ubuntu/workspace/Assmt_calculator/assmt_calc.cpp
Please enter your name, first and last only (ex. John Smith):
Heather Hunt
Please enter the total hours worked this week:
35
Please enter your hourly wage. DO NOT include the dollar symbol ($):
60.00
Please enter your insurance cost. DO NOT include the dollar symbol ($):
224.75
Please enter your odometer starting reading in whole miles:
5705
Please enter your odometer ending reading in whole miles:
5705
Employee Name:         Heather Hunt
Hours worked:          35
Hourly wage:           $60
Gross Pay:             $2100
Net Pay:               $1556.46
  Insurance Cost:        <$224.75>
  Total Tax:             <$318.793>
Mileage Reimbursement: $0
  Total Miles:           0
  Mileage Rate:          $0.35/mile
Total Pay:             $1556.46
*/

/* Output Test D.
Running /home/ubuntu/workspace/Assmt_calculator/assmt_calc.cpp
Please enter your name, first and last only (ex. John Smith):
Eddy Hall
Please enter the total hours worked this week:
40
Please enter your hourly wage. DO NOT include the dollar symbol ($):
8.25
Please enter your insurance cost. DO NOT include the dollar symbol ($):
180.27
Please enter your odometer starting reading in whole miles:
12919
Please enter your odometer ending reading in whole miles:
13146
Employee Name:         Eddy Hall
Hours worked:          40
Hourly wage:           $8.25
Gross Pay:             $330
Net Pay:               $124.276
  Insurance Cost:        <$180.27>
  Total Tax:             <$25.4541>
Mileage Reimbursement: $79.45
  Total Miles:           227
  Mileage Rate:          $0.35/mile
Total Pay:             $203.726
*/
     
     
 //Pseudo code        
         
 //create struct for Employee Name, first and last as separate variables
 /*create struct for wage factors, include variables for 
   hourly pay, hours worked, insurance cost, and tax rate*/
 /*create struct for mileage reimbursement, include variables for 
   starting odometer reading, ending odometer readint, and cents per mile*/
 
 /*get user input for:
   Employee Name
   hours worked
   hourly pay
   insurance cost
   starting odometer reading
   ending odometer reading*/
 
 /*calculate (create equations for):
   gross pay (hours worked * hourly pay)
   total tax ((gross pay - insurance cost) * tax rate)
   net pay (gross pay - total tax)
   mileage reimbursement ((odom ending - odom start) * mileage rate)
   total pay (net pay + mileage reimbursement)*/
 
 /*Output:
   Employee Name:    First and Last Name
   Hours worked:     Hours worked
   Hourly pay:       Hourly pay
   Gross Pay:        Gross Pay calculation
   Net Pay:          Net Pay Calculation
     Insurance Cost:   <insurance cost>
     Tax Deduction:    <total tax>
   Mileage Reimb.:   Mileage reimbursement calculation
     Total miles:      (odom ending - odom start)
     Mileage rate:     0.35/mile
   TOTAL PAY:        Total Pay calculation*/
   
/*   int main()
{
    std::cout << "\e[1mBold\e[0m non-bold" << std::endl; // displays Bold in bold
}
   code for printing in bold*/
   
   