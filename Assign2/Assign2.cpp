//created by Madeline Bird
//created on Thursday, Oct. 5, 2017
/*Description: Assignment 2.0 -  Class Conversion Calculators
  Creating a class for Race Time with variables and calls for variables that use
  mutator and accesor functions for comparing race times among runners.*/
//Citation and References: 

 #include <iostream> // include proper libraries
 #include <string> // include the string library for string variables
 using namespace std;
 
 class RaceTime { // declare race time class
    public:
        void SetMinutes(int mins); // mutator for minutes variable
        void SetSeconds(int secs); // mutator for seconds variable
        void SetFeetPerSec(double mins, double secs); // mutator for feet/sec variable
        void SetMetersPerSec(double mins, double secs); // mutator for meters/sec variable
        void SetSplitMins(int mins, int secs); // mutator for split minutes variable
        void SetSplitSecs(int mins, int secs); // mutator for split seconds variable
        void SetDiffMins1st(int mins, int secs); // mutator for difference from 1st minutes variable
        void SetDiffSecs1st(int mins, int secs); // mutator for difference from 1st seconds variable
        
        int GetMinutes() const; // accessor for minutes variable
        int GetSeconds() const; // accessor for seconds variable
        double GetFeetPerSec() const; // accessor for feet/sec variable
        double GetMetersPerSec() const; // accessor for meters/sec variable
        int GetSplitMins() const; // accessor for split minutes variable
        int GetSplitSecs() const; // accessor for split seconds variable
        int GetDiffMins1st() const; // accessor for difference from 1st minutes variable
        int GetDiffSecs1st() const; // accessor for difference from 1st seconds variable
        void print(); // Accessor for print function
        
    private:
        int minutes; // minutes variable
        int seconds; // seconds variables
        double feetpersec; // feet/sec variable
        double meterspersec; // meters/sec variable
        int splitmins; // split minutes variable
        int splitsecs; // split seconds variable
        int diffmins1st; // minutes difference from 1st variable
        int diffsecs1st; // seconds difference from 1st variable
 };
 
 void RaceTime::SetMinutes(int mins) { // define mutator function for minutes variable
     minutes = mins; // assign mins variable to minutes variable
 }
 
 void RaceTime::SetSeconds(int secs) { // define mutator function for seconds variable 
     seconds = secs; // assign secs variable to seconds variable
 }
 
 void RaceTime::SetFeetPerSec(double mins, double secs) { 
     feetpersec = 5280/((mins * 60) + secs); /* divide total feet (5280) by 
     calculated total seconds to get feet per second*/
 }
 
 void RaceTime::SetMetersPerSec(double mins, double secs) {
     meterspersec = 1609.34/((mins * 60.0) + secs); /* divide total meters (1609.34)  
     by calculated total seconds to get meters per second*/
 }
 
 void RaceTime::SetSplitMins(int mins, int secs) {
     splitmins = (((mins * 60) + secs)/4)/60; /* calculate total seconds and divide
     by 4 for quarter mile split, then divide by 60 to get split minutes*/
 }
 
 void RaceTime::SetSplitSecs(int mins, int secs) {
     splitsecs = (((mins * 60) + secs)/4)%60; /* calculate total seconds and divide
     by 4 for quarter mile split, then calculate modulo 60 to get split seconds*/
 }
 
 void RaceTime::SetDiffMins1st(int mins, int secs) {
     diffmins1st = (((mins * 60) + secs) - 227)/60; /* subtract total calculated
     seconds from first place total seconds and then divide by 60 to get difference
     in minutes from 1st place*/
 }
 
 void RaceTime::SetDiffSecs1st(int mins, int secs) {
     diffsecs1st = (((mins * 60) + secs) - 227)%60; /* subtract total calculated
     seconds from first place total seconds and then calculate modulo 60 to get 
     difference in seconds from 1st place*/
 }
 
 int RaceTime::GetMinutes() const { // define accessor function for minutes variable 
     return minutes; // return statement
 }
 
 int RaceTime::GetSeconds() const { // define accessor function for seconds variable 
     return seconds; // return statement
 }
 
 double RaceTime::GetFeetPerSec() const {
     return feetpersec;
 }
 
 double RaceTime::GetMetersPerSec() const {
     return meterspersec;
 }
 
 int RaceTime::GetSplitMins() const {
     return splitmins;
 }
 
 int RaceTime::GetSplitSecs() const {
     return splitsecs;
 }
 
 int RaceTime::GetDiffMins1st() const {
     return diffmins1st;
 }
 
 int RaceTime::GetDiffSecs1st() const {
     return diffsecs1st;
 }
 
 void RaceTime::print() { // define print function for output
     cout << endl;
     cout << "Race Time: " << minutes << ":" << seconds << endl; // runner's race time
     cout << "Feet/Second: " << feetpersec << endl; // runner's feet/sec
     cout << "Meters/Second: " << meterspersec << endl; // runner's metter/sec
     cout << "1/4 Mile Split: " << splitmins << ":" << splitsecs << endl; // runner's 1/4 mile split
     cout << "1st Place Difference: " << diffmins1st << ":" << diffsecs1st << endl; // diff from 1st place
 }
 
 int main() {
     RaceTime runner1; // create objects for each runner
     RaceTime runner2;
     RaceTime runner3;
     RaceTime runner4;
     RaceTime runner5;
     RaceTime runner6;
     RaceTime runner7;
     RaceTime runner8;
     RaceTime runner9;
     RaceTime runner10;
     
     int runmins = 0; // create variables to temporarily store user input
     int runsecs = 0;
     
     // Prompt user for first runner speed
     cout << "Please enter the minutes and seconds for the first runner (separate info with spaces only):"
        << endl;
     cin >> runmins >> runsecs; // store input in temporary variables
     
     runner1.SetMinutes(runmins); // use mutator functions to assign input to class object
     runner1.SetSeconds(runsecs);
     runner1.SetFeetPerSec(runmins, runsecs);
     runner1.SetMetersPerSec(runmins, runsecs);
     runner1.SetSplitMins(runmins, runsecs);
     runner1.SetSplitSecs(runmins, runsecs);
     runner1.SetDiffMins1st(runmins, runsecs);
     runner1.SetDiffSecs1st(runmins, runsecs);
     
     // Prompt user for second runner speed
     cout << "Please enter the minutes and seconds for the second runner (separate info with spaces only):"
        << endl;
     cin >> runmins >> runsecs; // store input in temporary variables
     
     runner2.SetMinutes(runmins); // use mutator functions to assign input to class object
     runner2.SetSeconds(runsecs);
     runner2.SetFeetPerSec(runmins, runsecs);
     runner2.SetMetersPerSec(runmins, runsecs);
     runner2.SetSplitMins(runmins, runsecs);
     runner2.SetSplitSecs(runmins, runsecs);
     runner2.SetDiffMins1st(runmins, runsecs);
     runner2.SetDiffSecs1st(runmins, runsecs);
     
     // Prompt user for third runner speed
     cout << "Please enter the minutes and seconds for the third runner (separate info with spaces only):"
        << endl;
     cin >> runmins >> runsecs; // store input in temporary variables
     
     runner3.SetMinutes(runmins); // use mutator functions to assign input to class object
     runner3.SetSeconds(runsecs);
     runner3.SetFeetPerSec(runmins, runsecs);
     runner3.SetMetersPerSec(runmins, runsecs);
     runner3.SetSplitMins(runmins, runsecs);
     runner3.SetSplitSecs(runmins, runsecs);
     runner3.SetDiffMins1st(runmins, runsecs);
     runner3.SetDiffSecs1st(runmins, runsecs);
     
     // Prompt user for fourth runner speed
     cout << "Please enter the minutes and seconds for the fourth runner (separate info with spaces only):"
        << endl;
     cin >> runmins >> runsecs; // store input in temporary variables
     
     runner4.SetMinutes(runmins); // use mutator functions to assign input to class object
     runner4.SetSeconds(runsecs);
     runner4.SetFeetPerSec(runmins, runsecs);
     runner4.SetMetersPerSec(runmins, runsecs);
     runner4.SetSplitMins(runmins, runsecs);
     runner4.SetSplitSecs(runmins, runsecs);
     runner4.SetDiffMins1st(runmins, runsecs);
     runner4.SetDiffSecs1st(runmins, runsecs);
     
     // Prompt user for fifth runner speed
     cout << "Please enter the minutes and seconds for the fifth runner (separate info with spaces only):"
        << endl;
     cin >> runmins >> runsecs; // store input in temporary variables
     
     runner5.SetMinutes(runmins); // use mutator functions to assign input to class object
     runner5.SetSeconds(runsecs);
     runner5.SetFeetPerSec(runmins, runsecs);
     runner5.SetMetersPerSec(runmins, runsecs);
     runner5.SetSplitMins(runmins, runsecs);
     runner5.SetSplitSecs(runmins, runsecs);
     runner5.SetDiffMins1st(runmins, runsecs);
     runner5.SetDiffSecs1st(runmins, runsecs);
     
     // Prompt user for sixth runner speed
     cout << "Please enter the minutes and seconds for the sixth runner (separate info with spaces only):"
        << endl;
     cin >> runmins >> runsecs; // store input in temporary variables
     
     runner6.SetMinutes(runmins); // use mutator functions to assign input to class object
     runner6.SetSeconds(runsecs);
     runner6.SetFeetPerSec(runmins, runsecs);
     runner6.SetMetersPerSec(runmins, runsecs);
     runner6.SetSplitMins(runmins, runsecs);
     runner6.SetSplitSecs(runmins, runsecs);
     runner6.SetDiffMins1st(runmins, runsecs);
     runner6.SetDiffSecs1st(runmins, runsecs);
     
     // Prompt user for seventh runner speed
     cout << "Please enter the minutes and seconds for the seventh runner (separate info with spaces only):"
        << endl;
     cin >> runmins >> runsecs; // store input in temporary variables
     
     runner7.SetMinutes(runmins); // use mutator functions to assign input to class object
     runner7.SetSeconds(runsecs);
     runner7.SetFeetPerSec(runmins, runsecs);
     runner7.SetMetersPerSec(runmins, runsecs);
     runner7.SetSplitMins(runmins, runsecs);
     runner7.SetSplitSecs(runmins, runsecs);
     runner7.SetDiffMins1st(runmins, runsecs);
     runner7.SetDiffSecs1st(runmins, runsecs);
     
     // Prompt user for eighth runner speed
     cout << "Please enter the minutes and seconds for the eighth runner (separate info with spaces only):"
        << endl;
     cin >> runmins >> runsecs; // store input in temporary variables
     
     runner8.SetMinutes(runmins); // use mutator functions to assign input to class object
     runner8.SetSeconds(runsecs);
     runner8.SetFeetPerSec(runmins, runsecs);
     runner8.SetMetersPerSec(runmins, runsecs);
     runner8.SetSplitMins(runmins, runsecs);
     runner8.SetSplitSecs(runmins, runsecs);
     runner8.SetDiffMins1st(runmins, runsecs);
     runner8.SetDiffSecs1st(runmins, runsecs);
     
     // Prompt user for ninth runner speed
     cout << "Please enter the minutes and seconds for the ninth runner (separate info with spaces only):"
        << endl;
     cin >> runmins >> runsecs; // store input in temporary variables
     
     runner9.SetMinutes(runmins); // use mutator functions to assign input to class object
     runner9.SetSeconds(runsecs);
     runner9.SetFeetPerSec(runmins, runsecs);
     runner9.SetMetersPerSec(runmins, runsecs);
     runner9.SetSplitMins(runmins, runsecs);
     runner9.SetSplitSecs(runmins, runsecs);
     runner9.SetDiffMins1st(runmins, runsecs);
     runner9.SetDiffSecs1st(runmins, runsecs);
     
     // Prompt user for tenth runner speed
     cout << "Please enter the minutes and seconds for the tenth runner (separate info with spaces only):"
        << endl;
     cin >> runmins >> runsecs; // store input in temporary variables
     
     runner10.SetMinutes(runmins); // use mutator functions to assign input to class object
     runner10.SetSeconds(runsecs);
     runner10.SetFeetPerSec(runmins, runsecs);
     runner10.SetMetersPerSec(runmins, runsecs);
     runner10.SetSplitMins(runmins, runsecs);
     runner10.SetSplitSecs(runmins, runsecs);
     runner10.SetDiffMins1st(runmins, runsecs);
     runner10.SetDiffSecs1st(runmins, runsecs);
     
     runner1.print();
     runner2.print();
     runner3.print();
     runner4.print();
     runner5.print();
     runner6.print();
     runner7.print();
     runner8.print();
     runner9.print();
     runner10.print();
 };
 
 /* Output
    Running /home/ubuntu/workspace/Assign2/Assign2.cpp
    Please enter the minutes and seconds for the first runner (separate info with spaces only):
    8 58
    Please enter the minutes and seconds for the second runner (separate info with spaces only):
    27 15
    Please enter the minutes and seconds for the third runner (separate info with spaces only):
    57 22
    Please enter the minutes and seconds for the fourth runner (separate info with spaces only):
    3 47
    Please enter the minutes and seconds for the fifth runner (separate info with spaces only):
    11 03
    Please enter the minutes and seconds for the sixth runner (separate info with spaces only):
    36 30
    Please enter the minutes and seconds for the seventh runner (separate info with spaces only):
    40 08
    Please enter the minutes and seconds for the eighth runner (separate info with spaces only):
    7 45
    Please enter the minutes and seconds for the ninth runner (separate info with spaces only):
    21 36
    Please enter the minutes and seconds for the tenth runner (separate info with spaces only):
    60 22
    
    Race Time: 8:58
    Feet/Second: 9.81413
    Meters/Second: 2.99134
    1/4 Mile Split: 2:14
    1st Place Difference: 5:11
    
    Race Time: 27:15
    Feet/Second: 3.22936
    Meters/Second: 0.984306
    1/4 Mile Split: 6:48
    1st Place Difference: 23:28
    
    Race Time: 57:22
    Feet/Second: 1.53399
    Meters/Second: 0.46756
    1/4 Mile Split: 14:20
    1st Place Difference: 53:35
    
    Race Time: 3:47
    Feet/Second: 23.2599
    Meters/Second: 7.0896
    1/4 Mile Split: 0:56
    1st Place Difference: 0:0
    
    Race Time: 11:3
    Feet/Second: 7.9638
    Meters/Second: 2.42736
    1/4 Mile Split: 2:45
    1st Place Difference: 7:16
    
    Race Time: 36:30
    Feet/Second: 2.41096
    Meters/Second: 0.734858
    1/4 Mile Split: 9:7
    1st Place Difference: 32:43
    
    Race Time: 40:8
    Feet/Second: 2.19269
    Meters/Second: 0.668331
    1/4 Mile Split: 10:2
    1st Place Difference: 36:21
    
    Race Time: 7:45
    Feet/Second: 11.3548
    Meters/Second: 3.46095
    1/4 Mile Split: 1:56
    1st Place Difference: 3:58
    
    Race Time: 21:36
    Feet/Second: 4.07407
    Meters/Second: 1.24177
    1/4 Mile Split: 5:24
    1st Place Difference: 17:49
    
    Race Time: 60:22
    Feet/Second: 1.45776
    Meters/Second: 0.444324
    1/4 Mile Split: 15:5
    1st Place Difference: 56:35
    
    
    Process exited with code: 0
*/