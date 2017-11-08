//created by Madeline Bird
//created on Tuesday, October 31, 2017
/*Description: Lab 4.3 Arrays of Objects
  Using arrays in a class to track a customer's ordering as well as a shop's
  inventory.*/
//Citation and References: 

 #include <iostream> // include proper libraries
 #include <string> // include the string library for string variables
 using namespace std;
 
 //item name
 //inventory
 //price
 //customer item
 //customer quantity
 //customer total
 
 class ShoppingCart {
     public:
        void SetOrder(int quantity);
        int GetNumItems();
        int GetOrderTtl();
        void Print();
     
     private:
        string itemname[10];
        int inventory[10];
        int price[10];
        int orderquantity[10];
        int totalquantity = 0;
        int totalprice = 0;
        int i = 0;
 }
 
 ShoppingCart::ShoppingCart(){
     string itemname[10] = {"Iris", "Tulip", "Lily", "Rose", "Daisy", "Pansie", 
                        "Small Pot", "Medium Pot", "Large Pot", "Soil"};
     int inventory[10] = {5, 5, 5, 5, 5, 5, 10, 8, 3, 20};
     int price[10] = {4, 4, 4, 4, 4, 4, 2, 3, 5, 10};
     int orderquantity[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
 }
 
 void ShoppingCart::SetOrder(int quantity){
     for (i=0; i<10; ++i) {
         cout << endl << "Enter the number you'd like to purchase for " << itemname[i] << ": ";
         cin >> orderquantity[i];
         
         if ((inventory[i] - orderquantity[i]) < 0) {
             cout << "Only " << inventory[i] << " in stock and will be added to your order." << endl;
             orderquantity[i] = inventory[i];
             
         }
         
         totalquantity = totalquantity + orderquantity[i];
         totalprice = totalprice + (orderquantity[i] * price[i]);
         inventory[i] = inventory[i] - orderquantity[i];
         
         cout << endl << "You ordered " << orderquantity[i] << " " << itemname[i] 
                << " for a total of $" << orderquantity[i] * price[i] << "." << endl;
         cout << "Your running total is $" << totalprice << endl;
     }
     
     cout << endl << "You ordered a total of " << totalquantity << " items for a total of $"
            << totalprice << "." << endl;
            
 int main (){
     
 }