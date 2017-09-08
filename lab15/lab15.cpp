//created by Madeline Bird
//created on Thursday, Sep. 7, 2017
/*Description: Mad Libs - to create a program that asks for at least 5 variables 
from the user and outputs entered values into a mad libs paragraph*/
//Citation and References: www.madlibs.com for ideas

 #include <iostream>
 #include <string>  // have to include string library
 using namespace std;
 
 int main()
 {
        string animal = "dog";            //initializing 1st string variable
        string clothingPlural = "socks";  //initializing 2nd string variable
        string nounPlural1 = "sprinkles"; //initializing 3rd string variable
        string noun = "drink";            //initializing 4th string variable
        string nounPlural2 = "memories";  //initializing 5th string variable
        string verbIng = "running";       //initializing 6th string variable
        
        cout << "Enter an animal:"; //asking user to enter a word for 1st variable.
        cin >> animal;
        cout << "Enter a clothing item in plural form:"; //asking user to enter a word for 2nd variable.
        cin >> clothingPlural;
        cout << "Enter a plural noun:";  //asking user to enter a word for 3rd variable.
        cin >> nounPlural1;
        cout << "Enter a singular noun:";  //asking user to enter a word for 4th variable.
        cin >> noun;
        cout << "Enter another plural noun:";  //asking user to enter a word for 5th variable.
        cin >> nounPlural2;
        cout << "Enter a verb ending in 'ing':";  //asking user to enter a word for 6th variable.
        cin >> verbIng;
        
        cout << endl;
        cout << "My Crazy Day Mad Lib" << endl;  //starting output for mad libs paragraph
        cout << endl;
        cout << "My teacher didn’t believe me, but my ";
        cout << animal << " really did eat my homework. My gym locker stinks" << endl;
        cout << "because I’m always leaving my dirty " << clothingPlural;
        cout << " in there!! I ordered one jelly donut with" << endl;
        cout << "whipped cream and extra " << nounPlural1;
        cout << ". I had a BBQ at my house and everyone brought their own" << endl;
        cout << noun << ". But, it’s all okay because my heart is filled with love and ";
        cout << nounPlural2 << " and my daily exercise is" << endl;
        cout << verbIng << " after work." << endl;  // ending output for madlibs paragraph.
        
    /* Running /home/ubuntu/workspace/lab15/lab15.cpp
Enter an animal:bear
Enter a clothing item in plural form:socks
Enter a plural noun:books
Enter a singular noun:pencil
Enter another plural noun:tables
Enter a verb ending in 'ing':sleeping

My Crazy Day Mad Lib

My teacher didn’t believe me, but my bear really did eat my homework. My gym locker stinks
because I’m always leaving my dirty socks in there!! I ordered one jelly donut with
whipped cream and extra books. I had a BBQ at my house and everyone brought their own
pencil. But, it’s all okay because my heart is filled with love and tables and my daily exercise is
sleeping after work.
*/
        
 }