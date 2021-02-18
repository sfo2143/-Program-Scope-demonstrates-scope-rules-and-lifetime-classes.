//***************************************************
// Mortgage Payment Calculator program
// This program determines the monthly payments on a
// mortgage given the loan amount, the yearly interest,
// and the number of years.
//***************************************************
#include <iostream>		// Access cout
#include <cmath>	    // Access power function
#include <iomanip>      // Improvement 1: Added <iomanip> to access the manipulators like setprecision
using namespace std;    // and erase the need

int main()
{
    float loanAmt;  //Improvement 2 for line 14-21: I put declarations inside the main function.
    float yearlyInt;    // It allocates storage for the variable and puts an unknown value inside it.
    int numYears;	     // It also follows through with the flow of execution

    float monthlyInterest;
    int numberOfPayments;
    float payment;

     cout << "Loan amount: "; //Improvement 3: I decided to input the values so that it can reused repeatedly
     cin  >> loanAmt;         // without being assigned to particular value
     cout << "Interest rate: ";
     cin  >> yearlyInt;
     cout << "Years:  ";
     cin  >> numYears;

    // Calculating the values

    monthlyInterest = yearlyInt / 12;
    numberOfPayments = numYears * 12;
    payment =(loanAmt * pow(monthlyInterest + 1, numberOfPayments)* monthlyInterest)
              /(pow(monthlyInterest + 1, numberOfPayments) - 1);

     cout << setprecision (2) << fixed;
     cout << "Your monthly payment is $" << payment << endl; // output the data to calculate the monthly payment

    return 0;
}
