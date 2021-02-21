// Program Convert converts a temperature from Fahrenheit to
// Celsius or a temperature from Celsius to Fahrenheit
// depending on whether the user enters an F or a C.

#include <iostream>
using namespace std;

// If letter is a 'C' tempIn is converted from Celsius
// to Fahrenheit; otherwise tempIn is converted from
// Fahrenheit to Celsius.
// Pre: tempIn contains an integer value and letter contains
//       'F' or 'C'
// Post: Returns converted tempIn to Farenheit or Celcius
int ConvertTemp(/* IN */ int tempIn, /* IN */ char letter);

int main () {
    char letter;	// Place to store input letter
    int tempIn;		// Temperature to be converted
    do {
        cout << "Input Menu"  << endl  << endl;
        cout << "F:  Convert from Fahrenheit to Celsius" << endl;
        cout << "C:  Convert from Celsius to Fahrenheit" << endl;
        cout << "Q:  Quit" << endl;
        cout << "Type a C, F,  or Q; then press return." << endl;

        cin  >> letter;
        letter = toupper(letter);
    } while (letter != 'F' && letter != 'C' && letter != 'Q');

    while (letter != 'Q') {

        cout << " Type an integer number, and press return."
             << endl;
        cin >> tempIn;

        if (letter == 'F')
            cout << "Fahrenheit to Celsius" << endl;
        else
            cout << "Celsius to Fahrenheit" << endl;

        cout << "Temperature to convert: " << tempIn  << endl;
        cout << "Converted temperature:  ";

        // Call ConvertTemp function passing tempIn and letter, and print returned result
        cout << ConvertTemp(tempIn, letter) << endl;

        do {
            cout << "Type a C, F,  or Q; then press return."  << endl;
            cin  >> letter;
            letter = toupper(letter);
        } while (letter != 'F' && letter != 'C' && letter != 'Q');
    }

    return 0;
}

int ConvertTemp(/* IN */ int tempIn, /* IN */ char letter){
    float convertedTemp;    // Local variable to hold converted value

    // If letter is 'C' convert from Celsius to Fahrenheit
    if (letter == 'C')
        convertedTemp =  (9 * tempIn / 5) + 32;
    else // Otherwise convert from Fahrenheit to Celsius
        convertedTemp = 5 * (tempIn - 32) / 9;

    return convertedTemp;   // Return converted value
}
