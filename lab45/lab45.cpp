//created by Madeline Bird
//created on Tuesday, November 14, 2017
/*Description: Lab 4.4 C-Strings
  Using arrays in Strings to collect names and create user names.*/
//Citation and References: 

 #include <iostream> // include proper libraries
 #include <string> // include the string library for string variables
 using namespace std;
 
 int main(){
     string fname;
     string lname;
     
     cout << "Enter first name (<11 chars): ";
   cin >> fname;
   
   if(fname.length() > 10) {
       cout << "Warning! The name you entered is too long." << endl;
   }
   
   // Prompt user for last name input
   cout << "Enter last name (<21 chars): ";
   cin >> lname;
   
   if(lname.length() > 20) {
       cout << "WARNING! The name you entered is too long." << endl;;
   }
   
   if(fname == lname){
       cout << endl << "WARNING! The first and last names you entered are the same." <<endl;
   }
   
   // User Name Options
   cout << endl << "Here are your username options:" << endl;
   
   cout << fname.substr(0,2);
   if (lname.length() > 20) {
       cout << lname.substr(0,20);
   }
   else {
       cout << lname;
   }
   
   cout << endl;
   
   if (fname.length() > 10) {
       cout << fname.substr(0,10);
   }
   else {
       cout << fname;
   }
   if (lname.length() > 20) {
       cout << lname.substr(0,20);
   }
   else {
       cout << lname;
   }
   
   cout << endl;
   
   cout << fname.substr(0,1);
   if (lname.length() > 20) {
       cout << lname.substr(0,20);
   }
   else {
       cout << lname;
   }
   
   cout << endl;
 };
 
 
 /* Output #1
 Running /home/ubuntu/workspace/lab45/lab45.cpp
Enter first name (<11 chars): Maddie 
Enter last name (<21 chars): Bird

Here are your username options:
MaBird
MaddieBird
MBird
*/

/* Output #2
Running /home/ubuntu/workspace/lab45/lab45.cpp
Enter first name (<11 chars): April 
Enter last name (<21 chars): Browne

Here are your username options:
ApBrowne
AprilBrowne
ABrowne
*/

/* Output #3
Running /home/ubuntu/workspace/lab45/lab45.cpp
Enter first name (<11 chars): AnaElizabeth
Warning! The name you entered is too long.
Enter last name (<21 chars): Hazeltine-Smiths

Here are your username options:
AnHazeltine-Smiths
AnaElizabeHazeltine-Smiths
AHazeltine-Smiths
*/

/* Output #4
Running /home/ubuntu/workspace/lab45/lab45.cpp
Enter first name (<11 chars): James
Enter last name (<21 chars): James

WARNING! The first and last names you entered are the same.

Here are your username options:
JaJames
JamesJames
JJames
*/
