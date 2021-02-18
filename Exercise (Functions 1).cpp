// Program Driver is a program to test function Swap

#include <iostream>
using namespace std;

// The contents of a and b are swapped
// Pre: Both a and b contain integer values
// Post: Values in a and b are swapped
void Swap( int *a, int *b); //Swaping of two numbers using call by refernce
//Explaniation:we needed to indicate which values needed to be swapped.
//The operations effect on the formal parameters doesn't reflect on the Actual Parameters.
// In Call by Reference we passed the address of the actual parameter in a formal parameter,
// So the changes on the Formal Parameters reflect on the Actual parameters.
int main ()
{
  int  x;
  int  y;
  cout  << "Enter two integer values; press return."  << endl;
  cin  >> x  >> y;

  cout  << "Input values: x="  << x  << " and y="  << y  << endl;
  Swap(&x, &y); //indicating that x & y needs to be swapped
  cout  << "Values swapped: x="  << x  << " and y="  << y  << endl;

 return 0;
}

// ***************************************

void  Swap(int *a, int *b)
{
  int x;

   x = *a; //copying the first variable address to the tempriory variable
  *a = *b; // copying the second variable address to the first variable
  *b =  x; //copying the tempriory variable to the second variable
}
