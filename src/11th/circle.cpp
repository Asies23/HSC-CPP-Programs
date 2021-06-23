// WAP to accept the radius of a circle and calculate & print the perimeter and area of it

// importing the required libraries
#include <iostream>
#include <conio.h>
using namespace std;
// main function which contains all the program logic
int main()
{
    float radius, result = 0.0; // Declaring Variables
    cout << "Enter the radius of the circle " << endl;
    cin >> radius;                                                                          // Accepting the radius
    result = 3.14 * radius * 2;                                                             // Calculating Perimeter
    cout << "The perimeter of a circle with radius " << radius << " is " << result << endl; // Printing the perimeter
    result = 3.14 * radius * radius;                                                        // Calculating the Area
    cout << "The Area of a circle with radius " << radius << " is " << result << endl;      // Printing the Area
    return 0;
    getch();
}

/*
Program Algorithm:
1.) Start
2.) Accept User Input
3.) Calculate Perimeter
4.) Output Perimeter
5.) Calculate Area
6.) Output Area
7.) Stop
*/

/*
// Same Program For Turbo C++
// WAP to accept the radius of a circle and calculate & print the perimeter and area of it

// importing the required libraries
#include <iostream.h>
#include <conio.h>
// main function which contains all the program logic
void main(){
    clrscr()
    float radius, result=0.0; // Declaring Variables
    cout<<"Enter the radius of the circle "<<endl;
    cin>>radius; // Accepting the radius
    result = 3.14 * radius * 2; // Calculating Perimeter
    cout<<"The perimeter of a circle with radius "<<radius<<" is "<<result<<endl; // Printing the perimeter
    result = 3.14 * radius *  radius; // Calculating the Area
    cout<<"The Area of a circle with radius "<<radius<<" is "<<result<<endl; // Printing the Area
    getch();
}
*/