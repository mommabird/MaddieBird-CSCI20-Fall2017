//created by Madeline Bird
//created on Thursday, November 16, 2017
/*Description: Lab 4.6 File Input/Output
  Using fstream to read in a file of student grades and output a student's 
  transcript to and HTML page*/
//Citation and References: 

 #include <iostream> // include proper libraries
 #include <fstream> //
 #include <cstdlib> //
 #include <iomanip>
 #include <ios>
 #include <string> // include the string library for string variables
 using namespace std;
 
 int main() {
    string fname;
    string lname;
    int numcourses = 0;
    string buffer = "";
    int hours[10]={0};
    char grade[10];
    double points[10]={0.0};
    int sumhours = 0;
    double sumpoints = 0.0;
    double gpa = 0.0;
    int i = 0;
    
    ifstream fin; 
    ofstream fout; 

    fin.open("input.txt"); 
    fout.open("output.txt"); 
    
    if (!fin.is_open()) {
      cout << "Could not open file myfile.txt." << endl;      
      return 1;
   }

    while(!fin.eof()) {
        fin >> fname;
        fin >> lname;
        fin >> numcourses;
    
        for(i = 0; i < numcourses; i++){
            fin >> hours[i];
            fin >> grade[i];
            
            //cout << hours[i] << " " << grade[i] << endl;
        }
        
        for(i = 0; i < numcourses; i++){
            if(grade[i] == 'A'){
                points[i] = 4.0;
            }
            else if (grade[i] == 'B'){
                points[i] = 3.0;
            }
            else if (grade[i] == 'C'){
                points[i] = 2.0;
            }
            else if(grade[i] == 'D'){
                points[i] = 1.0;
            }
            else {
                points[i] = 0.0;
            }
        }
     
        for(i = 0; i < numcourses; i++){
            sumhours = sumhours + hours[i];
            sumpoints = sumpoints + (hours[i] * points[i]);
            
            //cout << sumpoints << endl;
        }
    
        gpa = sumpoints/sumhours;
    
        fout << "Name: " << fname << " " << lname << endl;
        fout << "Number of Courses: " << numcourses << endl;
        fout << "Hours  Grade" << endl;
        
        for (i = 0; i < numcourses; i++) {
            fout << setw(5) << hours[i] << "  " << setw(5) << grade[i] << endl;
        }
        
        fout << "GPA: " << fixed << setprecision(2) << gpa << endl << endl;
        
        sumhours = 0;
        sumpoints = 0.0;
    }

    fin.close(); 
    fout.close(); 

    return 0;
} 
