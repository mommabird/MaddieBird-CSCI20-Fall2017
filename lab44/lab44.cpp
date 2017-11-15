//created by Madeline Bird
//created on Tuesday, November 14, 2017
/*Description: Lab 4.4 C-Strings
  Using arrays in C-strings to collect names and create user names.*/
//Citation and References: 

 #include <iostream> // include proper libraries
 #include <cstring> //include cstring library
 using namespace std;
 
 int main() {
   const int FIRSTNAME_SIZE = 10;
   const int LASTNAME_SIZE = 20;
   char  firstname[FIRSTNAME_SIZE]; // Input string
   char  lastname[LASTNAME_SIZE]; // input string
   int   i = 0; 
   int   j = 0;
   
   // Prompt user for first name input
   cout << "Enter first name (<11 chars): ";
   cin >> firstname;
   
   if(strlen(firstname) > 10) {
       cout << "Warning! The name you entered is too long." << endl;
   }
   
   // Prompt user for last name input
   cout << "Enter last name (<21 chars): ";
   cin >> lastname;
   
   if(strlen(lastname) > 20) {
       cout << "WARNING! The name you entered is too long." << endl;;
   }
   
   if(strcmp(firstname, lastname) == 0){
       cout << endl << "WARNING! The first and last names you entered are the same." <<endl;
   }
   
   // User Name Options
   cout << endl << "Here are your username options:" << endl;
   
   cout << firstname[0] << firstname[1];
   for (i=0; i<strlen(lastname) && i<20; i++) {
       cout << lastname[i];
   }
   
   cout << endl;
   
   for (i=0; i<strlen(firstname) && i<10; i++) {
        cout << firstname[i];
   }
   for (i=0; i<strlen(lastname) && i<20; i++) {
       cout << lastname[i];
   }
   
   cout << endl;
   
   cout << firstname[0];
   for (i=0; i<strlen(lastname) && i<20; i++) {
       cout << lastname[i];
   }
   
   cout << endl;
 };
 
 /* Output #1
 Running /home/ubuntu/workspace/lab44/lab44.cpp
Enter first name (<11 chars): Maddie
Enter last name (<21 chars): Bird

Here are your username options:
MaBird
MaddieBird
MBird
*/

/* Output #3
Running /home/ubuntu/workspace/lab44/lab44.cpp
Enter first name (<11 chars): April 
Enter last name (<21 chars): Browne

Here are your username options:
ApBrowne
AprilBrowne
ABrowne
*/

/* Output #3
Running /home/ubuntu/workspace/lab44/lab44.cpp
Enter first name (<11 chars): AnaElizabeth
Warning! The name you entered is too long.
Enter last name (<21 chars): Hazeltine-Smith

Here are your username options:
AnHazeltine-Smith
AnaElizabeHazeltine-Smith
AHazeltine-Smith
*/

/* Output #4
Running /home/ubuntu/workspace/lab44/lab44.cpp
Enter first name (<11 chars): James
Enter last name (<21 chars): James

WARNING! The first and last names you entered are the same.

Here are your username options:
JaJames
JamesJames
JJames
*/
