//created by Madeline Bird
//created on Tuesday, Sep. 12, 2017
/*Description: Lab 1.6 - Objects
  Creating a struct for a stock portfolio*/
//Citation and References: 

 #include <iostream> // include proper libraries
 #include <string>  // have to include string library
 using namespace std;
 
 
     struct StockPortfolio{         // creating struct with 4 variables
         char stockSector = 'A';
         string stockName = "Stock";
         double sharePrice = 0;
         int numShares = 0;
     };
     
     int main()
     {
     
     StockPortfolio stockStr1; // creating 4 objects for inidividual stocks
     StockPortfolio stockStr2;
     StockPortfolio stockStr3;
     StockPortfolio stockStr4;
     
     double stockTotal1 = 0;   // creating variables to calculate totals later
     double stockTotal2 = 0;
     double stockTotal3 = 0;
     double stockTotal4 = 0;
     double portfolioTotal = 0;
     
     cout << "Enter the stock name:" << endl; // asking user for each stock variable
     cin >> stockStr1.stockName;
     cout << "Enter the stock sector character:" << endl;
     cin >> stockStr1.stockSector;
     cout << "Enter the share price: " << endl;
     cin >> stockStr1.sharePrice;
     cout << "Enter the number of shares owned:" << endl;
     cin >> stockStr1.numShares;
     
     cout << "Enter the stock name:" << endl;
     cin >> stockStr2.stockName;
     cout << "Enter the stock sector character:" << endl;
     cin >> stockStr2.stockSector;
     cout << "Enter the share price: " << endl;
     cin >> stockStr2.sharePrice;
     cout << "Enter the number of shares owned:" << endl;
     cin >> stockStr2.numShares;
     
     cout << "Enter the stock name:" << endl;
     cin >> stockStr3.stockName;
     cout << "Enter the stock sector character:" << endl;
     cin >> stockStr3.stockSector;
     cout << "Enter the share price: " << endl;
     cin >> stockStr3.sharePrice;
     cout << "Enter the number of shares owned:" << endl;
     cin >> stockStr3.numShares;
     
     cout << "Enter the stock name:" << endl;
     cin >> stockStr4.stockName;
     cout << "Enter the stock sector character:" << endl;
     cin >> stockStr4.stockSector;
     cout << "Enter the share price: " << endl;
     cin >> stockStr4.sharePrice;
     cout << "Enter the number of shares owned:" << endl;
     cin >> stockStr4.numShares;
     
     stockTotal1 = stockStr1.sharePrice * stockStr1.numShares; //calculate totals
     stockTotal2 = stockStr2.sharePrice * stockStr2.numShares;
     stockTotal3 = stockStr3.sharePrice * stockStr3.numShares;
     stockTotal4 = stockStr4.sharePrice * stockStr4.numShares;
     portfolioTotal = stockTotal1 + stockTotal2 + stockTotal3 + stockTotal4;
     
     cout << "Stock Name   No of Shares   Current Value   Total Value" << endl; //printing portfolio summary
     cout << "----------   ------------   -------------   -----------" << endl;
     cout << stockStr1.stockName << "        " << stockStr1.numShares 
        << "             " << stockStr1.sharePrice << "           "
        << stockTotal1 << endl;
     cout << endl;
     cout << stockStr2.stockName << "    " << stockStr2.numShares 
        << "            " << stockStr2.sharePrice << "           "
        << stockTotal2 << endl;
     cout << endl;
     cout << stockStr3.stockName << "         " << stockStr3.numShares 
        << "              " << stockStr3.sharePrice << "          "
        << stockTotal3 << endl;
     cout << endl;
     cout << stockStr4.stockName << "          " << stockStr4.numShares 
        << "          " << stockStr4.sharePrice << "           "
        << stockTotal4 << endl;
     cout << "----------   ------------   -------------   -----------" << endl;
     cout << "Portfolio Total: $" << portfolioTotal << endl;
     
     };
     
/* Output:
Running /home/ubuntu/workspace/lab16/lab16.cpp
Enter the stock name:
FordM
Enter the stock sector character:
A
Enter the share price: 
18.76
Enter the number of shares owned:
87
Enter the stock name:
Albersn
Enter the stock sector character:
C
Enter the share price: 
34.39
Enter the number of shares owned:
542
Enter the stock name:
AAPL
Enter the stock sector character:
T
Enter the share price: 
145.91
Enter the number of shares owned:
5
Enter the stock name:
WFC
Enter the stock sector character:
F
Enter the share price: 
53.02
Enter the number of shares owned:
1368
Stock Name   No of Shares   Current Value   Total Value
----------   ------------   -------------   -----------
FordM        87             18.76           1632.12

Albersn    542            34.39           18639.4

AAPL         5              145.91          729.55

WFC          1368          53.02           72531.4
----------   ------------   -------------   -----------
Portfolio Total: $93532.4


Process exited with code: 0*/
