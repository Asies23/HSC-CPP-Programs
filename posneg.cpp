// WAP to check if the entered number is positive or negative

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number" << endl;
    cin >> num;
    if (num > 0)
    {
        cout << "The Number is positive";
    }
    else if (num < 0)
    {
        cout << "The Number is negative";
    }
    else
    {
        cout << "The Number is 0";
    }
    getch();
    return 0;
}
/*
// WAP to check if the entered number is positive or negative
// Same Program for Turbo C++

#include <iostream.h>
#include <conio.h>

void main()
{
    int num;
    clrscr();
    cout << "Enter a Number" << endl;
    cin >> num;
    (num >= 0) ? cout << "The Number is Positive" : cout << "The Number is Negative";
    getch();
}
*/