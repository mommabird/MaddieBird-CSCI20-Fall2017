//created by Madeline Bird
//created on Tuesday, October 31, 2017
/*Description: Lab 4.1 Single Arrays
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
     array_[size_] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
 }
 
 ArrayTools::ArrayTools(int myArray[], int SIZE){
     size_ = SIZE;
     array_[size_] = myArray[SIZE];
 }
 
 int ArrayTools::Find_min(int startnum, int endnum){
     int minVal = array_[startnum-1];        // Smallest so far
     int i = 0;
   
     for (i = startnum-1; i < endnum-1; ++i) {
         if (array_[i] < minVal) {
            minVal = array_[i];
         }
     }
     
     return minVal;
 }
 
 void ArrayTools::Print(){
     cout << "Min: " << Find_min(startnum, endnum) << endl;
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