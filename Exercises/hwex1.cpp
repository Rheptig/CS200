#include <iostream>     // input/output commands
using namespace std;    // standard library

int main()              // program entry function
{
    // Variable declarations
    float width;
    float length;
    float area;

    // Get user input:
    cout << "Room Calculator "<< endl;
    cout<<endl;

    cout << "Room 1" << endl;
    cout << endl;

    cout << "Enter the width: ";        // text output
    cin >> width;                       // input from the user

    cout << "Enter the length: ";
    cin >> length;

    area = width * length;              // assignment statement

    cout << endl;                       // empty line
    cout << "Area: " << area << endl;

    float perimeter;
    perimeter = 2 * width + 2 * length;

    cout << "Perimeter: " << perimeter << endl;
    cout << endl;

    cout << "Room 2" << endl;
    cout << endl;

    cout << "Enter the width: ";        // text output
    cin >> width;                       // input from the user

    cout << "Enter the length: ";
    cin >> length;
    cout << endl;

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;


    return 0;           // end of program
}
