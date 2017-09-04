//Predict population for a given number of years into the future

#include <iostream>
 using namespace std;

int main()
{
    int cpop = 325778971;
    double birthpersec = 1/8.0;
    double deathpersec = 1/12.0;
    double netmigpersec = 1/33.0;
    int secsinmin = 60;
    int minsinhour = 60;
    int hoursinday = 24;
    int daysinyear = 365;
    int cyear = 2017;
    int years = 99;
    
    /*int fpop =  cpop + (birthpersec * secsinmin * minsinhour * hoursinday * daysinyear * years)
                - (deathpersec * secsinmin * minsinhour * hoursinday * daysinyear * years)
                + (netmigpersec * secsinmin * minsinhour * hoursinday * daysinyear * years);*/
    
    cout << "In the year " << cyear + years << " the U.S. population will be "  
            << cpop + (birthpersec * secsinmin * minsinhour * hoursinday * daysinyear * years)
                - (deathpersec * secsinmin * minsinhour * hoursinday * daysinyear * years)
                + (netmigpersec * secsinmin * minsinhour * hoursinday * daysinyear * years)
        << endl;
    
    }