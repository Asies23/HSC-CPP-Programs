// WAP to print the sum of 1 to 10 numbers using a for loop

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int sum = 0, i;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    cout << "The Sum of Positive numbers till 10 is " << sum << endl;
    return 0;
}

/*
// WAP to print the sum of 1 to 10 numbers using a for loop
// Same program for Turbo C++

#include <iostream.h>
#include <conio.h>

int main()
{
    clrscr();
    int sum = 0, i;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    cout << "The Sum of Positive numbers till 10 is " << sum << endl;
    
}
*/