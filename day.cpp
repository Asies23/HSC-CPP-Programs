// WAP to acccept day number from user and print its day name.(eg. 1-Monday) 9th program

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int dayNumber;
    cout << "Enter Day Number" << endl;
    cin >> dayNumber;
    switch (dayNumber)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Wrong Input";
        break;
    }
    getch();
    return 0;
}

/*
// WAP to acccept day number from user and print its day name.(eg. 1-Monday)
// Same Program for Turbo C++

#include <iostream.h>
#include <conio.h>

void main()
{
    int dayNumber;
    clrscr();
    cout << "Enter Day Number" << endl;
    cin >> dayNumber;
    switch (dayNumber)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Wrong Input";
        break;
    }
    getch();
}
*/