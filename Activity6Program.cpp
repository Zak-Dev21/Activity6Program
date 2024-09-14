// program ask for user's info and displays outcome
#include <iostream>

using namespace std;

int main()
{
    // declare variable to store user input
    string city;
    string street;
    string state;
    int zipcode;

    cout << "What street are you from? " << endl;
    cin >> street;

    cout << "What city are you from? " << endl;
    cin >> city;

    cout << "What state are you from? " << endl;
    cin >> state;

    cout << "What is you zipcode? " << endl;
    cin >> zipcode;

    cout << "Street: " << street << endl;
    cout << "City, State, Zipcode: " << city << "," << state << zipcode;

}

