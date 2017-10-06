//created by Madeline Bird
//created on Tuesday, Sep. 28, 2017
/*Description: Lab 2.5 -  Classes and Mutator Functions
  Creating a book class with 3 variables and calls for 5 objects that use the
  mutator and accesor functions.*/
//Citation and References: zybooks chapter 12

 #include <iostream> // include proper libraries
 #include <string> // include the string library for string variables
 using namespace std;
 
 class Book { // declare Book class
    public:
        void SetTitle(string booktitle); // mutator for title variable
        void SetAuthor(string bookauthor); // mutator for author variable
        void SetCopyrightYear(int copyyear); // mutator for copyright year variable
        
        string GetTitle() const; // Accessor for title variable
        string GetAuthor() const; // Accessor for Author variable
        int GetCopyrightYear() const; // Accessor for copyright year variable
        void print(); // Accessor for print function
        
    private:
        string title; // title variable
        string author; // author variable
        int copyrightyear; // copyright year variable
 };
 
 void Book::SetTitle(string booktitle) { // define mutator function for title variable
     title = booktitle; // assign booktitle variable to title variable
 }
 
 void Book::SetAuthor(string bookauthor) { // define mutator function for author variable
     author = bookauthor; // assign bookauthor variable to author variable
 }
 
 void Book::SetCopyrightYear(int copyyear) { // define mutator function for copyright year variable
     copyrightyear = copyyear; // assign copyyear variable to copyrightyear variable
 }
 
 string Book::GetTitle() const { // define accessor function for title variable
     return title; // return statement for title variable
 }
 
 string Book::GetAuthor() const { // define accessor function for author variable
     return author // return statement for author variable
 }
 
 int Book::GetCopyrightYear() const { // define accessor function for copyright year variable
     return copyrightyear; // return statement for copyrightyear variable
 }
 
 void Book::print() { // define print function for output
     cout << "Good book: " << title << " by " << author << "; copyright year: " 
        << copyrightyear << endl;
 }
 
 int main() {
     Book goodbook1; // create five objects to collect book info
     Book goodbook2;
     Book goodbook3;
     Book goodbook4;
     Book goodbook5;
     
     string usertitle; // create variables to temporarily store user input
     string userauthor;
     int usercopyyear;
     
     // Prompt user for first book info
     cout << "Please enter the title, author, and copyright year of a good book (separate info with spaces only:"
        << endl;
     cin >> usertitle >> userauthor >> usercopyyear; // store input in temporary variables
     
     goodbook1.SetTitle(usertitle); // use mutator functions to assign input to class object
     goodbook1.SetAuthor(userauthor);
     goodbook1.SetCopyrightYear(usercopyyear);
     
     cout << endl;
     cout << "Book Title: " << goodbook1.GetTitle() << endl; // use accessor functions to output data for object
     cout << "Book Author: " << goodbook1.GetAuthor() << endl;
     cout << "Copyright Year: " << goodbook1.GetCopyrightYear() << endl;
     cout << endl;
     
     // Prompt user for second book info
     cout << "Please enter the title, author, and copyright year of another good book (separate info with spaces only:"
        << endl;
     cin >> usertitle >> userauthor >> usercopyyear;// store input in temporary variables
     
     goodbook2.SetTitle(usertitle); // use mutator functions to assign input to class object
     goodbook2.SetAuthor(userauthor);
     goodbook2.SetCopyrightYear(usercopyyear);
     
     cout << endl;
     cout << "Book Title: " << goodbook2.GetTitle() << endl; // use accessor functions to output data for object
     cout << "Book Author: " << goodbook2.GetAuthor() << endl;
     cout << "Copyright Year: " << goodbook2.GetCopyrightYear() << endl;
     cout << endl;
     
     // Prompt user for third book info
     cout << "Please enter the title, author, and copyright year of another good book (separate info with spaces only:"
        << endl;
     cin >> usertitle >> userauthor >> usercopyyear; // store input in temporary variables
     
     goodbook3.SetTitle(usertitle); // use mutator functions to assign input to class object
     goodbook3.SetAuthor(userauthor);
     goodbook3.SetCopyrightYear(usercopyyear);
     
     cout << endl;
     cout << "Book Title: " << goodbook3.GetTitle() << endl; // use accessor functions to output data for object
     cout << "Book Author: " << goodbook3.GetAuthor() << endl;
     cout << "Copyright Year: " << goodbook3.GetCopyrightYear() << endl;
     cout << endl;
     
     // Prompt user for fourth book info
     cout << "Please enter the title, author, and copyright year of another good book (separate info with spaces only:"
        << endl;
     cin >> usertitle >> userauthor >> usercopyyear; // store input in temporary variables
     
     goodbook4.SetTitle(usertitle); // use mutator functions to assign input to class object
     goodbook4.SetAuthor(userauthor);
     goodbook4.SetCopyrightYear(usercopyyear);
     
     cout << endl;
     cout << "Book Title: " << goodbook4.GetTitle() << endl; // use accessor functions to output data for object
     cout << "Book Author: " << goodbook4.GetAuthor() << endl;
     cout << "Copyright Year: " << goodbook4.GetCopyrightYear() << endl;
     cout << endl;
     
     // Prompt user for fourth book info
     cout << "Please enter the title, author, and copyright year of another good book (separate info with spaces only:"
        << endl;
     cin >> usertitle >> userauthor >> usercopyyear; // store input in temporary variables
     
     goodbook5.SetTitle(usertitle); // use mutator functions to assign input to class object
     goodbook5.SetAuthor(userauthor);
     goodbook5.SetCopyrightYear(usercopyyear);
     
     cout << endl;
     cout << "Book Title: " << goodbook5.GetTitle() << endl; // use accessor functions to output data for object
     cout << "Book Author: " << goodbook5.GetAuthor() << endl;
     cout << "Copyright Year: " << goodbook5.GetCopyrightYear() << endl;
     cout << endl;
     
     goodbook1.print(); // call class print function by object to print all data provided by user
     goodbook2.print();
     goodbook3.print();
     goodbook4.print();
     goodbook5.print();
 };
    
    
/* Output
Running /home/ubuntu/workspace/lab25/lab25.cpp
Please enter the title, author, and copyright year of a good book (separate info with spaces only:
Dogs Wolfie 2012

Book Title: Dogs
Book Author: Wolfie
Copyright Year: 2012

Please enter the title, author, and copyright year of another good book (separate info with spaces only:
Cats Tabitha 2013

Book Title: Cats
Book Author: Tabitha
Copyright Year: 2013

Please enter the title, author, and copyright year of another good book (separate info with spaces only:
Rabbits Bugsy 2014

Book Title: Rabbits
Book Author: Bugsy
Copyright Year: 2014

Please enter the title, author, and copyright year of another good book (separate info with spaces only:
Ducks Daffy 2015

Book Title: Ducks
Book Author: Daffy
Copyright Year: 2015

Please enter the title, author, and copyright year of another good book (separate info with spaces only:
Animals McDonald 2016

Book Title: Animals
Book Author: McDonald
Copyright Year: 2016

Good book: Dogs by Wolfie; copyright year: 2012
Good book: Cats by Tabitha; copyright year: 2013
Good book: Rabbits by Bugsy; copyright year: 2014
Good book: Ducks by Daffy; copyright year: 2015
Good book: Animals by McDonald; copyright year: 2016


Process exited with code: 0
*/
