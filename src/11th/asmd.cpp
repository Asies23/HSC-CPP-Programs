//Program 2: add, subtract, multiply, divide two numbers
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, result = 0;
    /* It is better to use less variables since it will allocate
     less memory and the program will run faster */
    float div = 0.0;
    cout << "Enter any two numbers" << endl;
    cin >> a >> b;
    result = a + b;
    cout << "The sum of " << a << " and " << b << " is " << result << endl;
    result = a - b;
    cout << "The difference of " << a << " and " << b << " is " << result << endl;
    result = a * b;
    cout << "The multiplication of " << a << " and " << b << " is " << result << endl;
    div = (float)a / b;
    cout << "The division of " << a << " and " << b << " is " << div << endl;
    return 0;
    getch();
}

/* 
// Same Program for Turbo C++
//Program 2: add, subtract, multiply, divide two numbers

#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a, b, result = 0;
    //It is better to use less variables since it will allocate less memory and the program will run faster
    float div = 0.0;
    cout << "Enter any two numbers" << endl;
    cin >> a >> b;
    result = a + b;
    cout << "The sum of " << a << " and " << b << " is " << result << endl;
    result = a - b;
    cout << "The difference of " << a << " and " << b << " is " << result << endl;
    result = a * b;
    cout << "The multiplication of " << a << " and " << b << " is " << result << endl;
    div = (float)a / b;
    cout << "The division of " << a << " and " << b << " is " << div << endl;
    getch();
}
 */