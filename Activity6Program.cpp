#include <iostream>
#include <string> // Include the string library to use the string class

using namespace std;

int main()
{
    // Declare variables to store user input
    string city;
    string street;
    string state;
    int zipcode;

    // Ask for the user's street (use getline to allow spaces in the street name)
    cout << "What street are you from? " << endl;
    getline(cin, street);

    // Ask for the user's city (again using getline)
    cout << "What city are you from? " << endl;
    getline(cin, city);

    // Ask for the user's state (using getline)
    cout << "What state are you from? " << endl;
    getline(cin, state);

    // Ask for the user's zipcode (using cin as zipcode is a single number)
    cout << "What is your zipcode? " << endl;
    cin >> zipcode;

    // Output the gathered information
    cout << "Street: " << street << endl;
    cout << "City: " << city << endl;
    cout << "State:  " << state << endl;
    cout << "Zipcode: " << zipcode << endl;

    return 0;
}

