// WAP to accept an number from user and check whether it is even or odd

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int input;
    cout << "Enter A Number" << endl;
    cin >> input;
    (input % 2 == 0) ? cout << "The Number is Even" : cout << "The Number is Odd";
    getch();
    return 0;
}

/*
Algorithm:
1.) Start
2.) Declare a variable of type int
3.) Read variable
4.) Check if it is even
5.) Print even if previouws condition is true and odd if it is false
4.) End
*/

/*
// WAP to accept an number from user and check whether it is even or odd
// Same Program for Turbo C++

#include <iostream.h>
#include <conio.h>

void main()
{
    int input;
    cout << "Enter A Number" << endl;
    cin >> input;
    (input%2==0) ? cout << "The Number is Even" : cout << "The Number is Odd";
    getch();
}
*/