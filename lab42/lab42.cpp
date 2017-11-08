//created by Madeline Bird
//created on Tuesday, October 31, 2017
/*Description: Lab 4.2 Parallel Arrays
  Using parallel arrays to track a customer's ordering as well as a shop's
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
 
 int main (){
     string itemname[10] = {"Iris", "Tulip", "Lily", "Rose", "Daisy", "Pansie", 
                        "Small Pot", "Medium Pot", "Large Pot", "Soil"};
     int inventory[10] = {5, 5, 5, 5, 5, 5, 10, 8, 3, 20};
     int price[10] = {4, 4, 4, 4, 4, 4, 2, 3, 5, 10};
     string bucketitems = "flowers";
     int orderquantity[10];
     int totalquantity = 0;
     int totalprice = 0;
     int i = 0;
     
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
 }
 
 /*Output
 Running /home/ubuntu/workspace/lab42/lab42.cpp

Enter the number you'd like to purchase for Iris: 4

You ordered 4 Iris for a total of $16.
Your running total is $16

Enter the number you'd like to purchase for Tulip: 3

You ordered 3 Tulip for a total of $12.
Your running total is $28

Enter the number you'd like to purchase for Lily: 2

You ordered 2 Lily for a total of $8.
Your running total is $36

Enter the number you'd like to purchase for Rose: 1

You ordered 1 Rose for a total of $4.
Your running total is $40

Enter the number you'd like to purchase for Daisy: 0

You ordered 0 Daisy for a total of $0.
Your running total is $40

Enter the number you'd like to purchase for Pansie: 6
Only 5 in stock and will be added to your order.

You ordered 5 Pansie for a total of $20.
Your running total is $60

Enter the number you'd like to purchase for Small Pot: 2

You ordered 2 Small Pot for a total of $4.
Your running total is $64

Enter the number you'd like to purchase for Medium Pot: 3

You ordered 3 Medium Pot for a total of $9.
Your running total is $73

Enter the number you'd like to purchase for Large Pot: 4
Only 3 in stock and will be added to your order.

You ordered 3 Large Pot for a total of $15.
Your running total is $88

Enter the number you'd like to purchase for Soil: 1

You ordered 1 Soil for a total of $10.
Your running total is $98

You ordered a total of 24 items for a total of $98.
*/