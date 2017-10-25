//created by Madeline Bird
//created on Tuesday, October 24, 2017
/*Description: Lab 3.5 - Classes and Constructors
  Creating a class with constructors that converts temperatures between Kelvin,
  Fahrenheit, and Ceslius and uses April's code to run.*/
//Citation and References: 

 #include <iostream> // include proper libraries
 using namespace std;
 
 class TemperatureConverter { //declare Temp Converter class
     public:
        void SetTempFromKelvin(double KelvinIn); //mutator function-sets Kelvin to input
        void SetTempFromCelsius(double celsiusin); //mutator - converts celsius to Kelvin
        void SetTempFromFahrenheit(double fahrenin); //mutator - converts Fahrenheit to Kelvin
        double GetTempFromKelvin (); // Accessor function - gets Kelvin temp
        double GetTempAsCelsius (); // Accessor function - gets Celsius temp
        double GetTempAsFahrenheit (); // Accessor function - gets Fahrenheit temp
        void PrintTemperatures (); // print function
        TemperatureConverter(); // default constructor sets kelvin to 0
        TemperatureConverter(double kelvinin); //overload constructor doesn't allow Kelvin < 0
        
     private:
        double Kelvin_; //declare the Kelvin variable
 };
 
 TemperatureConverter::TemperatureConverter () { // default constructor
     double Kelvin_ = 0.0; // default Kelvin
     
     return;
 }
 
 TemperatureConverter::TemperatureConverter (double kelvinin) { // overload constructor
     if (kelvinin < 0.0) {// if input < 0, sets Kelvin to 0
         Kelvin_ = 0.0;
     }
     else {
         Kelvin_ = kelvinin;// otherwise stores input in Kelvin class variable
     }
     
     return;
 }
 
 void TemperatureConverter::SetTempFromKelvin(double kelvinin) { // mutator function-sets Kelvin to input
     if (kelvinin < 0.0) {// doesn't allow value < 0
         Kelvin_ = 0.0;
     }
     else {
         Kelvin_ = kelvinin;
     }
 }
 
 void TemperatureConverter::SetTempFromCelsius(double celsiusin) { // mutator - converts celsius to Kelvin
     if(celsiusin < -273.15) {// doesn't allow value < -273.15
         Kelvin_ = 0;
     }
     else {
         Kelvin_ = celsiusin + 273.15; // Kelvin = C + 273.15
     }
 }
 
 void TemperatureConverter::SetTempFromFahrenheit (double fahrenin) { //mutator - converts Fahrenheit to Kelvin
     if(fahrenin < -459.67){// doesn't allow value < -459.67
         Kelvin_ = 0;
     }
     else {
         Kelvin_ = ((5 * (fahrenin - 32)) / 9) + 273.15;
         //Kelvin = ((5 * (f - 32)) / 9) + 273.15
     }
 }
 
 double TemperatureConverter::GetTempFromKelvin() {// accessor for Kelvin value
     return Kelvin_; // returns Kelvin
 }
 
 double TemperatureConverter::GetTempAsCelsius () {// accessor for Celsius value
     double Celsius_ = 0; // declares local variable for Celsius
     Celsius_ = Kelvin_ - 273.15; //sets Celsius = K - 273.15
     
     return Celsius_; // returns Celsius
 }
 
 double TemperatureConverter::GetTempAsFahrenheit() {// accessor for Fahrenheit value
     double Fahren_ = 0; // declares local variable for Fahrenheit
     Fahren_ = (((Kelvin_ - 273.15) * 9) / 5) + 32; //sets Fahrenheit = (((K - 273.15) * 9) / 5) + 32
     
     return Fahren_; //returns Fahrenheit
 }
 
 void TemperatureConverter::PrintTemperatures() { //print function
     cout << endl << endl << "Temp in Kelvin: " << GetTempFromKelvin() << endl; // uses accessor to print Kelvin
     cout << "Temp in Celsius: " << GetTempAsCelsius() << endl; // uses accessor to print Celsius
     cout << "Temp as Fahrenheit: " << GetTempAsFahrenheit() << endl; // uses accessor to print Fahrenheit
 }
 
 int main () {
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}