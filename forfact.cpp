// WAP to accept any number from user and print factorial of it on screen using for loop

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i = 1, num = 1, fact = 1;
    cout << "Enter a number" << endl;
    cin >> num;
    for (i = num; i > 0; i--)
    {
        fact *= i;
    }
    cout << "The Factorial of the Number is " << fact;
    getch();
    return 0;
}

/*
Output:-
  Enter a number
  5
  The Factorial of the Number is 120
*/