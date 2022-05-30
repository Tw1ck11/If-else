// If, else.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    
    
    
    ///////TASK 1
    double x1, x2, y1, y2;

    cin >> x1;
    cin >> x2;
    cin >> y1;
    cin >> y2;

    if (x1 == x2 && y1 != y2) {

        if (x1 == 0) {
            cout << "The line lies on the y-axis" << endl;
        }
        else {
            cout << "Straight line parallel to the y-axis" << endl;
        }
    }
    else if (y1 == y2 && x1 != x2) {

        if (y1 == 0) {
            cout << "The line lies on the abscissa axis" << endl;
        }
        else {
            cout << "The line is parallel to the abscissa axis" << endl;
        }
    }
    else if (x1 == x2 && y1 == y2) {
        cout << "It's the same point" << endl;
    }
    else {
        cout << "The line is not parallel to the abscise and y-axis" << endl;
    }

    
    
    
    
    
    //////TASK 2
    double num;

    cin >> num;

    if (num - (int)num == 0) {
        cout << "Number has no real part" << endl;
    }
    else {
        cout << "The number has a real part" << endl;
    }

    
    
    
    
    //////TASK 3
    int hours, mins, secs;

    char symbol;

    cout << "Enter time in hh:mm:ss: " << endl;
    cin >> hours >> symbol >> mins >> symbol >> secs;

    if (hours < 0 || hours >= 24 || mins < 0 || mins >= 60 || secs < 0 || secs >= 60 || symbol != ':') {
        cout << "Time entered incorrectly" << endl;
    }
    else {
        cout << "Time entered correctly" << endl;
    }

    
    
    
    
    
    ///////TASK 4
    int ticket_number;

    cin >> ticket_number;

    if (ticket_number >= 100000 && ticket_number <= 999999) {

        int units = ticket_number % 10;
        int tens = (ticket_number / 10) % 10;
        int hundreds = (ticket_number / 100) % 10;
        int thousands = (ticket_number / 1000) % 10;
        int tens_of_thousands = (ticket_number / 10000) % 10;
        int hundreds_of_thousands = (ticket_number / 100000) % 10;

        if (units + tens + hundreds == thousands + tens_of_thousands + hundreds_of_thousands) {
            cout << "Ticket happy" << endl;
        }
        else {
            cout << "Regular ticket" << endl;
        }
    }

    else {
        cout << "This ticket number cannot exist" << endl;
    }

    
    
    
    
    ////////TASK 5
    int day_time;

    cin >> day_time;

    if (day_time >= 0 && day_time < 5) {
        cout << "Good morning" << endl;
    }
    else if (day_time >= 5 && day_time < 12) {
        cout << "Good day" << endl;
    }
    else if (day_time >= 12 && day_time < 18) {
        cout << "Good evening" << endl;
    }
    else {
        cout << "Good night" << endl;
    }
}