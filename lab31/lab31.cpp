//created by Madeline Bird
//created on Wednesday, October 11, 2017
/*Description: Lab 3.1 Conditions
  Creating a program that will determine best phone plan for users using 
  conditional statements*/
//Citation and References: 

 #include <iostream> // include proper libraries
 #include <string> // include the string library for string variables
 using namespace std;
 
 /* Defining if function to calculate ATTPlusPlan cost based on user's number of 
 phones and number of tablets input. 
 */
 int ATTPlusPlan(int totalphones, int numtablets) {
     int apptotalcost = 0; // initialize local variable
     
     if (totalphones == 1) { // if user only has one phone, $90 + $10/tablet
         apptotalcost = 90 + (10 * numtablets);
     }
     else if (totalphones == 2) { // if user has two phones, $145 + $10/tablet
         apptotalcost = 145 + (10 * numtablets);
     }
     else { // user has 3 or more phones, $145 + $20/extra lines + $10/tablet
         apptotalcost = 145 + (20 * (totalphones - 2)) + (10 * numtablets);
     }
     
     return apptotalcost;
 };
 
 /* Defining if function to calculate ATTChoicePlan cost based on user's number  
 of phones and number of tablets input. 
 */
 int ATTChoicePlan (int totalphones, int numtablets) {
     int acptotalcost = 0; // initialize local variable
     
     if (totalphones == 1) { // if user has 1 phone, $60 + $10/tablet
         acptotalcost = 60 + (10 * numtablets);
     }
     else if (totalphones == 2) { // if user has 2 phones, $115 + $10/tablet
         acptotalcost = 115 + (10 * numtablets);
     }
     else { // if user has 3 or more phones, $115 + $20/extra line + $10/tablet
         acptotalcost = 115 + (20 * (totalphones - 2)) + (10 * numtablets);
     }
     
     return acptotalcost;
 };
 
 /* Defining switch function to calculate ATTFamilyPlan cost based on user's number  
 of phones, number of tablets input, and number of GB needed for data. 
 */
 int ATTFamilyPlan (int totalphones, int numtablets, int numdatagb) {
     int afptotalcost = 0; // initialize local variable
     
     switch (numdatagb) {
         case 0:
         case 1: // if user needs 0-1GB, $20/phone + $10/tablet + $30
            afptotalcost = (20 * totalphones) + (10 * numtablets) + 30;
            break;
         case 2:
         case 3: // if user needs 2-3GB, $20/phone + $10/tablet + $40
            afptotalcost = (20 * totalphones) + (10 * numtablets) + 40;
            break;
         case 4:
         case 5:
         case 6: // if user needs 4-6GB, $20/phone + $10/tablet + $60
            afptotalcost = (20 * totalphones) + (10 * numtablets) + 60;
            break;
         case 7:
         case 8:
         case 9:
         case 10: // if user needs 7-10GB, $20/phone + $10/tablet + $80
            afptotalcost = (20 * totalphones) + (10 * numtablets) + 80;
            break;
         case 11:
         case 12:
         case 13:
         case 14:
         case 15:
         case 16: // if user needs 11-16GB, $20/phone + $10/tablet + $90
            afptotalcost = (20 * totalphones) + (10 * numtablets) + 90;
            break;
         default: // if user needs more than 16GB, $20/phone + $10/tablet + $110
            afptotalcost = (20 * totalphones) + (10 * numtablets) + 110;
            break;
     }
     
     return afptotalcost;
 };
 
 /* Defining if function to calculate VerizonUnlimitedPlan cost based on user's   
 number of phones and number of tablets input. 
 */
 int Verizon (int totalphones, int numtablets) {
     int vtotalcost = 0; // initialize local variable
     
     if (totalphones == 1) { // if user has 1 phone, $80 + $20/phone + $10/tablet
         vtotalcost = 80 + (20 * totalphones) + (10 * numtablets);
     }
     else { // if user has 2 or more phones, $110 + $20/phone + $10/tablet
         vtotalcost = 110 + (20 * totalphones) + (10 * numtablets);
     }
     
     return vtotalcost;
 };
 
 /* Defining function to calculate SprintUnlimitedPlan cost based on user's   
 number of phones input. 
 */
 int SprintUnlimited (int totalphones) {
     int sutotalcost = 0; //initialize local variable
     
     // cost = $60 + $40 for second line + $30/extra line
     sutotalcost = 60 + (40 * (totalphones - 1)) + (30 * (totalphones - 2));
     
     return sutotalcost;
 };
 
 /* Defining function to calculate Sprint2GBPlan cost based on user's number  
 of phones input. 
 */
 int Sprint2GBPlan (int totalphones) {
     int s2gbtotalcost = 0; //initialize local variable
     
     s2gbtotalcost = 40 * totalphones; // cost = $40/phone
     
     return s2gbtotalcost;
 };
 
 /* Defining if function to determine the best plan based on user input after
 calculating costs for each plan. 
 */
 string BestPlanChoice (int attppcost, int attcpcost, int attfamilycost, 
    int vercost, int sprintunlimitcost, int sprint2gbcost) {
        string bestplan = "No plan"; // initialize local variable
        
        // if ATTPlusPlan is less than or equal to every other plan, pick ATTPlus
        if ((attppcost <= attcpcost) && (attppcost <= attfamilycost) && 
            (attppcost <= vercost) && (attppcost <= sprintunlimitcost) && 
            (attppcost <= sprint2gbcost)) {
            bestplan = "Att Unlimited Plus Plan";
        }
        // else if ATTChoicePlan is less than or equal to every other plan, pick ATTChoice
        else if ((attcpcost <= attfamilycost) && (attcpcost <= vercost) &&
            (attcpcost <= sprintunlimitcost) && (attcpcost <= sprint2gbcost)) {
            bestplan = "ATT Unlimited Choice Plan";
        }
        // if ATTFamPlan is less than or equal to every other plan, pick ATTFamily
        else if ((attfamilycost <= vercost) && (attfamilycost <= sprintunlimitcost)
            && (attfamilycost <= sprint2gbcost)) {
            bestplan = "ATT Family Plan"; 
        }
        // if Verizon is less than or equal to every other plan, pick Verizon
        else if ((vercost <= sprintunlimitcost) && (vercost <= sprint2gbcost)) {
            bestplan = "Verizon Unlimited";
        }
        // if SprintUnlimited is less than or equal to every other plan, pick SprintUnlimited
        else if (sprintunlimitcost <= sprint2gbcost) {
            bestplan = "Sprint Unlimited";
        }
        // if Sprint2GB is less than or equal to every other plan, pick Sprint2GB
        else {
            bestplan = "Sprint 2GB Plan";
        }
        
    return bestplan;
};

int main() {
    int totalphones       = 0; // initialize variables for input
    int numtablets        = 0;
    int numdatagb         = 0;
    int attppcost         = 0; // initialize variables to capture returned values
    int attcpcost         = 0;
    int attfamilycost     = 0;
    int vercost           = 0;
    int sprintunlimitcost = 0;
    int sprint2gbcost     = 0;
    
    // Prompt for user input and store in variables
    cout << "Enter the number of phones: " << endl;
    cin >> totalphones;
    cout << endl << "Enter the number of tablets: " << endl;
    cin >> numtablets;
    cout << endl << "Enter the number of GB needed: " << endl;
    cin >> numdatagb;
    
    // call functions for each plan and store returned values in variables
    attppcost = ATTPlusPlan(totalphones, numtablets);
    attcpcost = ATTChoicePlan(totalphones, numtablets);
    attfamilycost = ATTFamilyPlan(totalphones, numtablets, numdatagb);
    vercost = Verizon(totalphones, numtablets);
    sprintunlimitcost = SprintUnlimited(totalphones);
    sprint2gbcost = Sprint2GBPlan(totalphones);
    
    // output best plan based on user input and defined functions
    cout << endl << "The best plan for " << totalphones << " phones, " << numtablets
        << " tablets, and " << numdatagb << "GB of data is: " << endl;
    cout << BestPlanChoice(attppcost, attcpcost, attfamilycost, vercost, 
        sprintunlimitcost, sprint2gbcost) << endl;
        
    return 0;
};
 
 
 
/* Output #1
Running /home/ubuntu/workspace/lab31/lab31.cpp
Enter the number of phones: 
2

Enter the number of tablets: 
0

Enter the number of GB needed: 
5

The best plan for 2 phones, 0 tablets, and 5GB of data is: 
Sprint 2GB Plan


*/

/* Output #2
Running /home/ubuntu/workspace/lab31/lab31.cpp
Enter the number of phones: 
3

Enter the number of tablets: 
1

Enter the number of GB needed: 
15

The best plan for 3 phones, 1 tablets, and 15GB of data is: 
Sprint 2GB Plan

*/

/* Output #3
Running /home/ubuntu/workspace/lab31/lab31.cpp
Enter the number of phones: 
1

Enter the number of tablets: 
0

Enter the number of GB needed: 
0

The best plan for 1 phones, 0 tablets, and 0GB of data is: 
Sprint Unlimited

*/ 
 