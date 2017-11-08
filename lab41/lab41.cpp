//created by Madeline Bird
//created on Tuesday, October 31, 2017
/*Description: Lab 4.2 Parallel Arrays
  Using arrays appropriately within a class.*/
//Citation and References: 

 #include <iostream> // include proper libraries
 #include <string> // include the string library for string variables
 using namespace std;
 
 class ArrayTools {
     public:
        int Find_min(int startnum, int endnum);
        int Find_max(int myArray, int SIZE);
        int Find_sum();
        int Num_even();
        int Num_odd();
        int Search(int SIZE);
        int Is_sorted();
        void Print();
        ArrayTools();
        ArrayTools(int myArray[], int SIZE);
     
     private:
        int size_;
        int array_[];
 };
 
 ArrayTools::ArrayTools(){
     size_ = 10;
     int i = 0;
     
     for (i = 0; i < size_; i++) {
         array_[i] = 0;
     }
 }
 
 ArrayTools::ArrayTools(int myArray[], int SIZE){
     size_ = SIZE;
     int i = 0;
     
     for (i = 0; i < size_; i++) {
         array_[i] = myArray[i];
     }
 }
 
 int ArrayTools::Find_min(int startnum, int endnum){
     int minval = array_[startnum];        // Smallest so far
     int i = 0;
   
     for (i = startnum; i < endnum; ++i) {
         if (array_[i] < minval) {
            minval = array_[i];
         }
     }
     
     return minval;
 }
 
 void ArrayTools::Print(){
     cout << "Min: " << minval << endl;
 }
 
 
 int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray,size);
    
    a.Print();
    // cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    // cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    // cout<<"Sum = "<<a.Find_sum()<<endl;
    // cout<<"Search 10"<<a.Search(10)<<endl;
    // cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}