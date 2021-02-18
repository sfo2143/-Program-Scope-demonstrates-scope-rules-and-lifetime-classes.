// Program to convert a given military time to standard time.
// Could still include several optimizations/improvements, like...
#include <iostream>

using namespace std;

// Take a given hour in military time and return a string with the equivalent time
// Pre: hour contains number between 0 and 23
// Post: Returns string with standard (non-military) time format
string HourToString(int hour);

// Take a given minutes in military time and return a string with the equivalent time
// Pre: minutes contains number between 0 and 59
// Post: Returns string with standard (non-military) time format
string MinutesToString(int minutes);

int main() {
    int hour;
    int minutes;

    // Prompt for time in military format
    cout << "Enter a time in military format (hh:mm): ";
    cin >> hour;
    cin.get();
    cin >> minutes;

    // Handle special cases (noon and midnight)
    if ((hour == 12) && (minutes == 0))
        cout << "noon";
    else if ((hour == 0) && (minutes == 0))
        cout << "midnight";
    else {
        // Convert hour to text (Call HourToString, return string)
        cout << HourToString(hour) << ' ' ;

        // Convert minutes to text (Call MinutesToString, return string)
        cout << MinutesToString(minutes) << ' ';

        // Determine AM/PM (If hour < 12 "AM" else "PM")
        cout << (hour < 12 ? "AM" : "PM");
    }

    return 0;
}

// Take a given hour in military time and return a string with the equivalent time
// Pre: hour contains number between 0 and 23
// Post: Returns string with standard (non-military) time format
string HourToString(int hour) {
    string hourString;

    // Convert to military hours to standard hours
    if (hour > 12)
        hour = hour / 2;

    switch(hour) {
        case 0: hourString = "Twelve"; break;
        case 1: hourString = "One"; break;
        case 2: hourString = "Two"; break;
        case 3: hourString = "Three"; break;
        case 4: hourString = "Four"; break;
        case 5: hourString = "Five"; break;
        case 6: hourString = "Six"; break;
        case 7: hourString = "Seven"; break;
        case 8: hourString = "Eight"; break;
        case 9: hourString = "Nine"; break;
        case 10: hourString = "Ten"; break;
        case 11: hourString = "Eleven"; break;
        case 12: hourString = "Twelve"; break;
    }


    return hourString;
}

// Take a given minutes in military time and return a string with the equivalent time
// Pre: minutes contains number between 0 and 59
// Post: Returns string with standard (non-military) time format
string MinutesToString(int minutes) {
    string minuteString;

    // Convert minutes to minuteString
    if (minutes <= 10) {
        switch(minutes) {
            case 0: minuteString = "o'clock"; break;
            case 1: minuteString = "Oh One"; break;
            case 2: minuteString = "Oh Two"; break;
            case 3: minuteString = "Oh Three"; break;
            case 4: minuteString = "Oh Four"; break;
            case 5: minuteString = "Oh Five"; break;
            case 6: minuteString = "Oh Six"; break;
            case 7: minuteString = "Oh Seven"; break;
            case 8: minuteString = "Oh Eight"; break;
            case 9: minuteString = "Oh Nine"; break;
            case 10: minuteString = "Ten"; break;
        }
    }else if (minutes <=19) {
        // Convert minutes to teen number to minuteString
        switch(minutes) {
            case 11: minuteString = "Eleven"; break;
            case 12: minuteString = "Twelve"; break;
            case 13: minuteString = "Thirteen"; break;
            case 14: minuteString = "Fourteen"; break;
            case 15: minuteString = "Fifteen"; break;
            case 16: minuteString = "Sixteen"; break;
            case 17: minuteString = "Seventeen"; break;
            case 18: minuteString = "Eightteen"; break;
            case 19: minuteString = "Nineteen"; break;
        }
    } else {
        // Convert Tens place to minuteString
        switch (minutes / 10) {
            case 2: minuteString = "Twenty"; break;
            case 3: minuteString = "Thirty"; break;
            case 4: minuteString = "Forty"; break;
            case 5: minuteString = "Fifty"; break;
        }
        // Convert Ones place to string and append to minuteString
        switch(minutes % 10) {
            case 0: minuteString += ""; break;
            case 1: minuteString += " One"; break;
            case 2: minuteString += " Two"; break;
            case 3: minuteString += " Three"; break;
            case 4: minuteString += " Four"; break;
            case 5: minuteString += " Five"; break;
            case 6: minuteString += " Six"; break;
            case 7: minuteString += " Seven"; break;
            case 8: minuteString += " Eight"; break;
            case 9: minuteString += " Nine"; break;
        }
    }

    return minuteString;
}
