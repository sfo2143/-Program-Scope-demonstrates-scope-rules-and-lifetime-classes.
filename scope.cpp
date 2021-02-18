// Program Scope demonstrates scope rules and lifetime
// classes.

#include <iostream>
#include <fstream>
using namespace std;

// Sums the numbers on inFile.
void SumNumbers(ifstream &inFile, int &answer);

int main () {
    int  sum = 0;
    ifstream inNums;

    inNums.open("numeric.dat");
    if (!inNums){
        cout << "Input file does not exist!\n";
        return 1;
    }

    SumNumbers(inNums, sum);
    cout << "Output from first call to SumNumbers" << endl;
    cout << "Sum is " << sum << endl;   // Prints proper sum


    SumNumbers(inNums, sum);
    cout << "Output from second call to SumNumbers" << endl;
    cout << "Sum is " << sum << endl;   // Does not print sum. Why not?

    return 0;
}

//****************************************************

void  SumNumbers(ifstream &inFile, int &answer) {
    static int  counter = 1;  // What happens if static is removed?
    int number;

//    // What do the following two lines do? What happens if you remove static?
//    static int callNumber = 1;
//    cout << "SumNumbers called " << callNumber++ << " times.\n";

    answer = 0;
    while (counter <= 4) {
        inFile >> number;
        answer = answer + number;
        counter++;
    }
}
